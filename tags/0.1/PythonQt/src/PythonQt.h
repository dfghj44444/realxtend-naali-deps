#ifndef _PYTHONQT_H
#define _PYTHONQT_H

/*
 *
 *  Copyright (C) 2006 MeVis Research GmbH All Rights Reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  Further, this software is distributed without any warranty that it is
 *  free of the rightful claim of any third person regarding infringement
 *  or the like.  Any license provided herein, whether implied or
 *  otherwise, applies only to this software file.  Patent licenses, if
 *  any, provided herein do not apply to combinations of this program with
 *  other software, or any other product whatsoever.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact information: MeVis Research GmbH, Universitaetsallee 29,
 *  28359 Bremen, Germany or:
 *
 *  http://www.mevis.de
 *
 */

//----------------------------------------------------------------------------------
/*!
// \file    PythonQt.h
// \author  Florian Link
// \author  Last changed by $Author: florian $
// \date    2006-05
*/
//----------------------------------------------------------------------------------

#include "PythonQtSystem.h"
#include "PythonQtInstanceWrapper.h"
#include "PythonQtClassWrapper.h"
#include "PythonQtSlot.h"
#include "PythonQtObjectPtr.h"
#include <QObject>
#include <QVariant>
#include <QList>
#include <QHash>
#include <QByteArray>
#include <QStringList>
#include <QtDebug>
#include <iostream>


class PythonQtClassInfo;
class PythonQtPrivate;
class PythonQtMethodInfo;
class PythonQtSignalReceiver;
class PythonQtImportFileInterface;
class PythonQtCppWrapperFactory;
class PythonQtQFileImporter;

typedef void  PythonQtQObjectWrappedCB(QObject* object);
typedef void  PythonQtQObjectNoLongerWrappedCB(QObject* object);
typedef void* PythonQtPolymorphicHandlerCB(const void *ptr, char **class_name);

typedef void PythonQtShellSetInstanceWrapperCB(void* object, PythonQtInstanceWrapper* wrapper);

template<class T> void PythonQtSetInstanceWrapperOnShell(void* object, PythonQtInstanceWrapper* wrapper) { ((T*)object)->_wrapper = wrapper; };

//! returns the offset that needs to be added to upcast an object of type T1 to T2
template<class T1, class T2> int PythonQtUpcastingOffset() {
  return (((char*)(static_cast<T2*>(reinterpret_cast<T1*>(0x100)))) - ((char*)reinterpret_cast<T1*>(0x100))); 
}

//! callback to create a QObject lazily
typedef QObject* PythonQtQObjectCreatorFunctionCB();

//! helper template to create a derived QObject class
template<class T> QObject* PythonQtCreateObject() { return new T(); };

//! the main interface to the Python Qt binding, realized as a singleton
class PYTHONQT_EXPORT PythonQt : public QObject {

  Q_OBJECT

public:
  enum InitFlags {
    RedirectStdOut = 1,   //!<< sets if the std out/err is redirected to pythonStdOut() and pythonStdErr() signals
    IgnoreSiteModule = 2, //!<< sets if Python should ignore the site module
    ExternalHelp = 4,	  //!<< sets if help() calls on PythonQt modules are forwarded to the pythonHelpRequest() signal
	DoNotInitializePython = 8 //!<< doesn't call Py_Initialize() so you can use your existing interpreter
  };

  //! initialize the python qt binding (flags are a or combination of InitFlags)
  static void init(int flags = IgnoreSiteModule | RedirectStdOut);

  //! cleanup
  static void cleanup();

  //! get the singleton instance
  static PythonQt* self() { return _self; }

  //-----------------------------------------------------------------------------
  // Public API:

  //! defines the object types for introspection
  enum ObjectType {
    Class,
    Function,
    Variable,
    Module,
    Anything,
    CallOverloads
  };

  //! overwrite the python sys path (call this directly after PythonQt::init() if you want to change the std python sys path)
  void overwriteSysPath(const QStringList& paths);

  //! prepend a path to sys.path to allow importing from it
  void addSysPath(const QString& path);

  //! sets the __path__ list of a module to the given list (important for local imports)
  void setModuleImportPath(PyObject* module, const QStringList& paths);

  //! get the __main__ module of python
  PythonQtObjectPtr getMainModule();

  //! registers a QObject derived class to PythonQt (this is implicitly called by addObject as well)
  /* Since Qt4 does not offer a way to detect if a given classname is derived from QObject and thus has a QMetaObject,
   you MUST register all your QObject derived classes here when you want them to be detected in signal and slot calls */
  void registerClass(const QMetaObject* metaobject, const char* package = NULL, PythonQtQObjectCreatorFunctionCB* wrapperCreator = NULL, PythonQtShellSetInstanceWrapperCB* shell = NULL);
  
  //! add a wrapper object for the given QMetaType typeName, also does an addClassDecorators() to add constructors for variants
  //! (ownership of wrapper is passed to PythonQt)
  /*! Make sure that you have done a qRegisterMetaType first, if typeName is a user type!
   
   This will add a wrapper object that is used to make calls to the given classname \c typeName.
   All slots that take a pointer to typeName as the first argument will be callable from Python on
   a variant object that contains such a type.
   */
  void registerCPPClass(const char* typeName, const char* parentTypeName = NULL, const char* package = NULL, PythonQtQObjectCreatorFunctionCB* wrapperCreator = NULL, PythonQtShellSetInstanceWrapperCB* shell = NULL);

  //! as an alternative to registerClass, you can tell PythonQt the names of QObject derived classes
  //! and it will register the classes when it first sees a pointer to such a derived class
  void registerQObjectClassNames(const QStringList& names);

  //! add a parent class relation to the \c given typeName, the upcastingOffset is needed for multiple inheritance
  //! and can be calculated using PythonQtUpcastingOffset<type,parentType>(), which also verifies that
  //! type is really derived from parentType.
  //! Returns false if the typeName was not yet registered.
  bool addParentClass(const char* typeName, const char* parentTypeName, int upcastingOffset=0);

  //! add a handler for polymorphic downcasting
  void addPolymorphicHandler(const char* typeName, PythonQtPolymorphicHandlerCB* cb);

  //! parses the given file and returns the python code object, this can then be used to call evalCode()
  PythonQtObjectPtr parseFile(const QString& filename);

  //! evaluates the given code and returns the result value (use Py_Compile etc. to create pycode from string)
  //! If pycode is NULL, a python error is printed.
  QVariant evalCode(PyObject* object, PyObject* pycode);

  //! evaluates the given script code and returns the result value
  QVariant evalScript(PyObject* object, const QString& script, int start = Py_file_input);

  //! evaluates the given script code from file
  void evalFile(PyObject* object, const QString& filename);

  //! creates the new module \c name and evaluates the given file in the context of that module
  //! If the \c script is empty, the module contains no initial code. You can use evalScript/evalCode to add code
  //! to a module later on.
  //! The user needs to make sure that the \c name is unique in the python module dictionary.
  PythonQtObjectPtr createModuleFromFile(const QString& name, const QString& filename);

  //! creates the new module \c name and evaluates the given script in the context of that module.
  //! If the \c script is empty, the module contains no initial code. You can use evalScript/evalCode to add code
  //! to a module later on.
  //! The user needs to make sure that the \c name is unique in the python module dictionary.
  PythonQtObjectPtr createModuleFromScript(const QString& name, const QString& script = QString());

  //! create a uniquely named module, you can use evalFile or evalScript to populate the module with
  //! script code
  PythonQtObjectPtr createUniqueModule();

  //@{ Signal handlers

  //! add a signal handler to the given \c signal of \c obj  and connect it to a callable \c objectname in module
  bool addSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname);

  //! remove a signal handler from the given \c signal of \c obj
  bool removeSignalHandler(QObject* obj, const char* signal, PyObject* module, const QString& objectname);

  //! add a signal handler to the given \c signal of \c obj  and connect it to a callable \c receiver
  bool addSignalHandler(QObject* obj, const char* signal, PyObject* receiver);

  //! remove a signal handler from the given \c signal of \c obj
  bool removeSignalHandler(QObject* obj, const char* signal, PyObject* receiver);

  //@}

  //@{ Variable access

  //! add the given \c qObject to the python \c object as a variable with \c name (it can be removed via clearVariable)
  void addObject(PyObject* object, const QString& name, QObject* qObject);

  //! for use in non-qt-wrapped python c api funcs that want to return a pythonqt wrapped object
  PyObject* wrapQObject(QObject* qObject);

  //! add the given variable to the object
  void addVariable(PyObject* object, const QString& name, const QVariant& v);

  //! remove the given variable
  void removeVariable(PyObject* module, const QString& name);

  //! get the variable with the \c name of the \c object, returns an invalid QVariant on error
  QVariant getVariable(PyObject* object, const QString& name);

  //! read vars etc. in scope of an \c object, optional looking inside of an object \c objectname
  QStringList introspection(PyObject* object, const QString& objectname, ObjectType type);

  //! returns the found callable object or NULL
  //! @return new reference
  PythonQtObjectPtr lookupCallable(PyObject* object, const QString& name);

  //@}

  //@{ Calling of python callables

  //! call the given python \c callable in the scope of object, returns the result converted to a QVariant
  QVariant call(PyObject* object, const QString& callable, const QVariantList& args = QVariantList());

  //! call the given python object, returns the result converted to a QVariant
  QVariant call(PyObject* callable, const QVariantList& args = QVariantList());

  //! call the given python object, returns the result as new PyObject
  PyObject* callAndReturnPyObject(PyObject* callable, const QVariantList& args = QVariantList());

  //@}

  //@{ Decorations, constructors, wrappers...


  //! add an object whose slots will be used as decorator slots for
  //! other QObjects or CPP classes. The slots need to follow the
  //! convention that the first argument is a pointer to the wrapped object.
  //! (ownership is passed to PythonQt)
  /*!
  Example:

  A slot with the signature

  \code
  bool doSomething(QWidget* w, int a)
  \endcode

  will extend QWidget instances (and derived classes) with a "bool doSomething(int a)" slot
  that will be called with the concrete instance as first argument.
  So in Python you can now e.g. call

  \code
  someWidget.doSomething(12)
  \endcode

  without QWidget really having this method. This allows to easily make normal methods
  of Qt classes callable by forwarding them with such decorator slots
  or to make CPP classes (which are not derived from QObject) callable from Python.
  */
  void addInstanceDecorators(QObject* o);

  //! add an object whose slots will be used as decorator slots for
  //! class objects (ownership is passed to PythonQt)
  /*!
  The slots need to follow the following convention:
  - SomeClass* new_SomeClass(...)
  - QVariant new_SomeClass(...)
  - void delete_SomeClass(SomeClass*)
  - ... static_SomeClass_someName(...)

  This will add:
  - a constructor
  - a constructor which generates a QVariant
  - a destructor (only useful for CPP objects)
  - a static decorator slot which will be available on the MetaObject (visible in PythonQt module)

  */
  void addClassDecorators(QObject* o);

  //! this will add the object both as class and instance decorator (ownership is passed to PythonQt)
  void addDecorators(QObject* o);

  //! add the given factory to PythonQt (ownership stays with caller)
  void addWrapperFactory(PythonQtCppWrapperFactory* factory);

  //@}

  //@{ Custom importer (to replace internal import implementation of python)

  //! replace the internal import implementation and use the supplied interface to load files (both py and pyc files)
  //! (this method should be called directly after initialization of init() and before calling overwriteSysPath().
  //! On the first call to this method, it will install a generic PythonQt importer in Pythons "path_hooks". 
  //! This is not reversible, so even setting setImporter(NULL) afterwards will
  //! keep the custom PythonQt importer with a QFile default import interface.
  //! Subsequent python import calls will make use of the passed importInterface
  //! which forwards all import calls to the given \c importInterface.
  //! Passing NULL will install a default QFile importer.
  //! (\c importInterface ownership stays with caller)
  void setImporter(PythonQtImportFileInterface* importInterface);

  //! this installs the default QFile importer (which effectively does a setImporter(NULL))
  //! (without calling setImporter or installDefaultImporter at least once, the default python import
  //! mechanism is in place)
  //! the default importer allows to import files from anywhere QFile can read from,
  //! including the Qt resource system using ":". Keep in mind that you need to extend
  //! "sys.path" with ":" to be able to import from the Qt resources.
  void installDefaultImporter() { setImporter(NULL); }

  //! set paths that the importer should ignore
  void setImporterIgnorePaths(const QStringList& paths);

  //! get paths that the importer should ignore
  const QStringList& getImporterIgnorePaths();

  //@}

  //! get access to internal data (should not be used on the public API, but is used by some C functions)
  static PythonQtPrivate* priv() { return _self->_p; }

  //! get access to the file importer (if set)
  static PythonQtImportFileInterface* importInterface();

  //! handle a python error, call this when a python function fails. If no error occurred, it returns false.
  //! The error is currently just output to the python stderr, future version might implement better trace printing
  bool handleError();

  //! set a callback that is called when a QObject with parent == NULL is wrapped by pythonqt
  void setQObjectWrappedCallback(PythonQtQObjectWrappedCB* cb);
  //! set a callback that is called when a QObject with parent == NULL is no longer wrapped by pythonqt
  void setQObjectNoLongerWrappedCallback(PythonQtQObjectNoLongerWrappedCB* cb);

  //! call the callback if it is set
  static void qObjectNoLongerWrappedCB(QObject* o);

signals:
  //! emitted when python outputs something to stdout (and redirection is turned on)
  void pythonStdOut(const QString& str);
  //! emitted when python outputs something to stderr (and redirection is turned on)
  void pythonStdErr(const QString& str);

  //! emitted when help() is called on a PythonQt object and \c ExternalHelp is enabled
  void pythonHelpRequest(const QByteArray& cppClassName);


public:
  //! called by internal help methods
  PyObject* helpCalled(PythonQtClassInfo* info);

  //! returns the found object or NULL
  //! @return new reference
  PythonQtObjectPtr lookupObject(PyObject* module, const QString& name);

private:
  void initPythonQtModule(bool redirectStdOut);

  //! callback for stdout redirection, emits pythonStdOut signal
  static void stdOutRedirectCB(const QString& str);
  //! callback for stderr redirection, emits pythonStdErr signal
  static void stdErrRedirectCB(const QString& str);

  //! get (and create if not available) the signal receiver of that QObject, signal receiver is made child of the passed \c obj
  PythonQtSignalReceiver* getSignalReceiver(QObject* obj);

  PythonQt(int flags);
  ~PythonQt();

  static PythonQt* _self;
  static int _uniqueModuleCount;

  PythonQtPrivate* _p;

};

//! internal PythonQt details
class PYTHONQT_EXPORT PythonQtPrivate : public QObject {

  Q_OBJECT

public:
  PythonQtPrivate();
  ~PythonQtPrivate();

  enum DecoratorTypes {
    StaticDecorator = 1,
    ConstructorDecorator = 2,
    DestructorDecorator = 4,
    InstanceDecorator = 8,
    AllDecorators = 0xffff
  };

  //! get the suffixes that are used for shared libraries
  const QStringList& sharedLibrarySuffixes() { return _sharedLibrarySuffixes; }

  //! returns if the id is the id for PythonQtObjectPtr
  bool isPythonQtObjectPtrMetaId(int id) { return _PythonQtObjectPtr_metaId == id; }

  //! add the wrapper pointer (for reuse if the same obj appears while wrapper still exists)
  void addWrapperPointer(void* obj, PythonQtInstanceWrapper* wrapper);
  //! remove the wrapper ptr again
  void removeWrapperPointer(void* obj);

  //! add parent class relation
  bool addParentClass(const char* typeName, const char* parentTypeName, int upcastingOffset);

  //! add a handler for polymorphic downcasting
  void addPolymorphicHandler(const char* typeName, PythonQtPolymorphicHandlerCB* cb);
 
  //! lookup existing classinfo and return new if not yet present
  PythonQtClassInfo* lookupClassInfoAndCreateIfNotPresent(const char* typeName);

  //! called when a signal emitting QObject is destroyed to remove the signal handler from the hash map
  void removeSignalEmitter(QObject* obj);

  //! wrap the given QObject into a Python object (or return existing wrapper!)
  PyObject* wrapQObject(QObject* obj);

  //! wrap the given ptr into a Python object (or return existing wrapper!) if there is a known QObject of that name or a known wrapper in the factory
  PyObject* wrapPtr(void* ptr, const QByteArray& name);

  //! registers a QObject derived class to PythonQt (this is implicitly called by addObject as well)
  /* Since Qt4 does not offer a way to detect if a given classname is derived from QObject and thus has a QMetaObject,
     you MUST register all your QObject derived classes here when you want them to be detected in signal and slot calls */
  void registerClass(const QMetaObject* metaobject, const char* package = NULL, PythonQtQObjectCreatorFunctionCB* wrapperCreator = NULL, PythonQtShellSetInstanceWrapperCB* shell = NULL);

  //! add a wrapper object for the given QMetaType typeName, also does an addClassDecorators() to add constructors for variants
  //! (ownership of wrapper is passed to PythonQt)
  /*! Make sure that you have done a qRegisterMetaType first, if typeName is a user type!
   
   This will add a wrapper object that is used to make calls to the given classname \c typeName.
   All slots that take a pointer to typeName as the first argument will be callable from Python on
   a variant object that contains such a type.
   */
  void registerCPPClass(const char* typeName, const char* parentTypeName = NULL, const char* package = NULL, PythonQtQObjectCreatorFunctionCB* wrapperCreator = NULL, PythonQtShellSetInstanceWrapperCB* shell = NULL);
  
  //! as an alternative to registerClass, you can tell PythonQt the names of QObject derived classes
  //! and it will register the classes when it first sees a pointer to such a derived class
  void registerQObjectClassNames(const QStringList& names);

  //! add a decorator object
  void addDecorators(QObject* o, int decoTypes);

  //! helper method that creates a PythonQtClassWrapper object  (returns a new reference)
  PythonQtClassWrapper* createNewPythonQtClassWrapper(PythonQtClassInfo* info, const char* package = NULL);

  //! create a new instance of the given enum type with given value (returns a new reference)
  static PyObject*  createEnumValueInstance(PyObject* enumType, unsigned int enumValue);

  //! helper that creates a new int derived class that represents the enum of the given name  (returns a new reference)
  static PyObject* createNewPythonQtEnumWrapper(const char* enumName, PyObject* parentObject);

  //! helper method that creates a PythonQtInstanceWrapper object and registers it in the object map
  PythonQtInstanceWrapper* createNewPythonQtInstanceWrapper(QObject* obj, PythonQtClassInfo* info, void* wrappedPtr = NULL);

  //! get the class info for a meta object (if available)
  PythonQtClassInfo* getClassInfo(const QMetaObject* meta) { return _knownClassInfos.value(meta->className()); }

  //! get the class info for a meta object (if available)
  PythonQtClassInfo* getClassInfo(const QByteArray& className) { return _knownClassInfos.value(className); }

  //! creates the new module from the given pycode
  PythonQtObjectPtr createModule(const QString& name, PyObject* pycode);

  //! get the current class info (for the next PythonQtClassWrapper that is created) and reset it to NULL again
  PythonQtClassInfo* currentClassInfoForClassWrapperCreation();

  //! the dummy tuple (which is empty and may be used to detected that a wrapper is called from internal wrapper creation
  static PyObject* dummyTuple();

  //! called by virtual overloads when a python return value can not be converted to the required Qt type
  void handleVirtualOverloadReturnError(const char* signature, const PythonQtMethodInfo* methodInfo, PyObject* result);
  
private:
  //! Setup the shared library suffixes by getting them from the "imp" module.
  void setupSharedLibrarySuffixes();

  //! create a new pythonqt class wrapper and place it in the pythonqt module
  void createPythonQtClassWrapper(PythonQtClassInfo* info, const char* package);

  //! get/create new package module (the returned object is a borrowed reference)
  PyObject* packageByName(const char* name);

  //! get the wrapper for a given pointer (and remove a wrapper of an already destroyed qobject)
  PythonQtInstanceWrapper* findWrapperAndRemoveUnused(void* obj);

  //! stores pointer to PyObject mapping of wrapped QObjects AND C++ objects
  QHash<void* , PythonQtInstanceWrapper *> _wrappedObjects;

  //! stores the meta info of known Qt classes
  QHash<QByteArray, PythonQtClassInfo *>   _knownClassInfos;

  //! names of qobject derived classes that can be casted to qobject savely
  QHash<QByteArray, bool> _knownQObjectClassNames;

  //! stores signal receivers for QObjects
  QHash<QObject* , PythonQtSignalReceiver *> _signalReceivers;

  //! the PythonQt python module
  PythonQtObjectPtr _pythonQtModule;

  //! the importer interface (if set)
  PythonQtImportFileInterface* _importInterface;

  //! the default importer
  PythonQtQFileImporter* _defaultImporter;
  
  PythonQtQObjectNoLongerWrappedCB* _noLongerWrappedCB;
  PythonQtQObjectWrappedCB* _wrappedCB;

  QStringList _importIgnorePaths;
  QStringList _sharedLibrarySuffixes;

  //! the cpp object wrapper factories
  QList<PythonQtCppWrapperFactory*> _cppWrapperFactories;

  QHash<QByteArray, PyObject*> _packages;

  PythonQtClassInfo* _currentClassInfoForClassWrapperCreation;

  int _initFlags;
  int _PythonQtObjectPtr_metaId;

  friend class PythonQt;
};

#endif
