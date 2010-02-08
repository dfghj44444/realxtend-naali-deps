/****************************************************************************
**
** Copyright (C) 1992-2008 Trolltech ASA. All rights reserved.
**
** This file is part of the Qt Script Generator project on Trolltech Labs.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.  Please review the following information to ensure GNU
** General Public Licensing requirements will be met:
** http://www.trolltech.com/products/qt/opensource.html
**
** If you are unsure which license is appropriate for your use, please
** review the following information:
** http://www.trolltech.com/products/qt/licensing.html or contact the
** sales department at sales@trolltech.com.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include "shellimplgenerator.h"
#include "reporthandler.h"
#include "fileout.h"

extern void declareFunctionMetaTypes(QTextStream &stream,
                                     const AbstractMetaFunctionList &functions,
                                     QSet<QString> &registeredTypeNames);

QString ShellImplGenerator::fileNameForClass(const AbstractMetaClass *meta_class) const
{
  return QString("PythonQtWrapper_%1.cpp").arg(meta_class->name());
}

static bool include_less_than(const Include &a, const Include &b) 
{
  return a.name < b.name;
}

static void writeHelperCode(QTextStream &s, const AbstractMetaClass *)
{
}

void writeQtScriptQtBindingsLicense(QTextStream &stream);

void ShellImplGenerator::write(QTextStream &s, const AbstractMetaClass *meta_class)
{
  if (FileOut::license)
    writeQtScriptQtBindingsLicense(s);

  QString pro_file_name = meta_class->package().replace(".", "_") + "/" + meta_class->package().replace(".", "_") + ".pri";

  if (!ShellGenerator::isBuiltIn(meta_class->name())) {
    priGenerator->addSource(pro_file_name, fileNameForClass(meta_class));
  }

  s << "#include \"PythonQtWrapper_" << meta_class->name() << ".h\"" << endl << endl;

  s << "#include <PythonQtSignalReceiver.h>" << endl;
  s << "#include <PythonQtMethodInfo.h>" << endl;
  s << "#include <PythonQtConversion.h>" << endl;

  //if (!meta_class->generateShellClass())
  //    return;

  IncludeList list = meta_class->typeEntry()->extraIncludes();
  qSort(list.begin(), list.end());
  foreach (const Include &inc, list) {
    ShellGenerator::writeInclude(s, inc);
  }  
  s << endl;

  writeHelperCode(s, meta_class);

  // find constructors
  AbstractMetaFunctionList ctors;
  ctors = meta_class->queryFunctions(AbstractMetaClass::Constructors
    | AbstractMetaClass::WasVisible
    | AbstractMetaClass::NotRemovedFromTargetLang);
  // find member functions
  AbstractMetaFunctionList functions = getFunctionsToWrap(meta_class);

  // write metatype declarations
  {
    //    QSet<QString> registeredTypeNames = m_qmetatype_declared_typenames;
    //    declareFunctionMetaTypes(s, functions, registeredTypeNames);
    //    s << endl;
  }

  if (meta_class->generateShellClass()) {
    AbstractMetaFunctionList virtualsForShell = getVirtualFunctionsForShell(meta_class);
    foreach (const AbstractMetaFunction *fun, virtualsForShell) {
      bool hasReturnValue = (fun->type());
      writeFunctionSignature(s, fun, meta_class, QString(),
        Option(OriginalName | ShowStatic | UnderscoreSpaces),
        "PythonQtShell_");
      s << endl << "{" << endl;

      Option typeOptions = Option(OriginalName | UnderscoreSpaces | SkipName);
      AbstractMetaArgumentList args = fun->arguments();

      s << "if (_wrapper) {" << endl;
      s << "  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, \"" << fun->name() << "\");" << endl;
      s << "  PyErr_Clear();" << endl;
      s << "  if (obj && !PythonQtSlotFunction_Check(obj)) {" << endl;
      s << "    static const char* argumentList[] ={\"";
      if (hasReturnValue) {
        // write the arguments, return type first
        writeTypeInfo(s, fun->type(), typeOptions);
      }
      s << "\"";
      for (int i = 0; i < args.size(); ++i) {
        s << " , \"";
        writeTypeInfo(s, args.at(i)->type(), typeOptions);
        s << "\"";
      }
      s << "};" << endl;
      s << "    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(" << QString::number(args.size()+1) << ", argumentList);" << endl;

      if (hasReturnValue) {
        s << "      ";
        writeTypeInfo(s, fun->type(), typeOptions);
        s << " returnValue;" << endl;
        // TODO: POD init to default is missing...
      }
      s << "    void* args[" << QString::number(args.size()+1) << "] = {NULL";
      for (int i = 0; i < args.size(); ++i) {
        s << ", (void*)&" << args.at(i)->argumentName();
      }
      s << "};" << endl;

      s << "    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);" << endl;
      if (hasReturnValue) {
        s << "    if (result) {" << endl;
        s << "      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);" << endl;
        s << "      if (args[0]!=&returnValue) {" << endl;
        s << "        if (args[0]==NULL) {" << endl;
        s << "          PythonQt::priv()->handleVirtualOverloadReturnError(\"" << fun->name() << "\", methodInfo, result);" << endl;
        s << "        } else {" << endl;
        s << "          returnValue = *((";
        writeTypeInfo(s, fun->type(), typeOptions);
        s << "*)args[0]);" << endl;
        s << "        }" << endl;
        s << "      }" << endl;
        s << "    }" << endl;
      }
      s << "    if (result) { Py_DECREF(result); } " << endl;
      s << "    Py_DECREF(obj);" << endl;
      if (hasReturnValue) {
        s << "    return returnValue;" << endl;
      } else {
        s << "    return;" << endl;
      }
      s << "  }" << endl;
      s << "}" << endl;

      s << "  ";
      if (fun->isAbstract()) {
        if (fun->type()) {
          // return empty default object
          writeTypeInfo(s, fun->type(), typeOptions);
          s << " result;" << endl;
          s << "return result";
          s << ";";
        }
      } else {
        if (fun->type()) {
          s << "return ";
        }
        s << meta_class->qualifiedCppName() << "::";
        s << fun->originalName() << "(";
        for (int i = 0; i < args.size(); ++i) {
          if (i > 0)
            s << ", ";
          s << args.at(i)->argumentName();
        }
        s << ");";
      }
      s << endl << "}" << endl;
    }
  }

  if (meta_class->generateShellClass() || !meta_class->isAbstract()) {

    // write constructors
    foreach (const AbstractMetaFunction *ctor, ctors) {
      if (!ctor->isPublic() || ctor->isAbstract()) { continue; }

      s << meta_class->qualifiedCppName() << "* ";
      s << "PythonQtWrapper_" << meta_class->name() << "::";
      writeFunctionSignature(s, ctor, 0, "new_", Option(OriginalName | ShowStatic));
      s << endl;
      s << "{ " << endl;
      s << "return new " << (meta_class->generateShellClass()?shellClassName(meta_class):meta_class->qualifiedCppName()) << "(";
      AbstractMetaArgumentList args = ctor->arguments();
      for (int i = 0; i < args.size(); ++i) {
        if (i > 0)
          s << ", ";
        s << args.at(i)->argumentName();
      }
      s << ");" << " }" << endl << endl;
    }
  }

  QString wrappedObject = " (*theWrappedObject)";

  // write member functions
  for (int i = 0; i < functions.size(); ++i) {
    AbstractMetaFunction *fun = functions.at(i);
    if (fun->isSlot()) continue;

    writeFunctionSignature(s, fun, meta_class, QString(),
      Option(ConvertReferenceToPtr | FirstArgIsWrappedObject | OriginalName | ShowStatic | UnderscoreSpaces),
      "PythonQtWrapper_");
    s << endl << "{" << endl;
    s << "  ";
    if (ShellGenerator::isSpecialStreamingOperator(fun)) {
      s << fun->arguments().at(0)->argumentName();
      if (fun->originalName().startsWith("operator>>")) {
        s << " >> ";
      } else {
        s << " << ";
      }
      s << wrappedObject;
    } else {
      QString scriptFunctionName = fun->originalName();
      AbstractMetaArgumentList args = fun->arguments();
      // call the C++ implementation
      if (fun->type()) {
        s << "return ";
        // call the C++ implementation
        if (fun->type()->isReference()) {
          s << "&";
        }
      }
      s << "(";
      if (scriptFunctionName.startsWith("operator>>")) {
        s << wrappedObject << " >>" << args.at(0)->argumentName();
      } else if (scriptFunctionName.startsWith("operator<<")) {
        s << wrappedObject << " <<" << args.at(0)->argumentName();
      } else if (scriptFunctionName.startsWith("operator[]")) {
        s << wrappedObject << "[" << args.at(0)->argumentName() << "]";
      } else if (scriptFunctionName.startsWith("operator") && args.size()==1) {
        QString op = scriptFunctionName.mid(8);
        s << wrappedObject << op << " " << args.at(0)->argumentName();
      } else {
        if (fun->isStatic()) {
          s << meta_class->qualifiedCppName() << "::";
        } else {
          if (!fun->isPublic() || fun->isVirtual()) {
            s << " (("  << promoterClassName(meta_class) << "*)theWrappedObject)->promoted_";
          } else {
            s << " theWrappedObject->";
          }
        }
        s  << fun->originalName() << "(";
        for (int i = 0; i < args.size(); ++i) {
          if (i > 0)
            s << ", ";
          s << args.at(i)->argumentName();
        }
        s << ")";
      }
      s << ")";
    }
    s << ";" << endl;

    s << "}" << endl << endl;
  }

  if (!meta_class->hasDefaultToStringFunction() && meta_class->hasToStringCapability()) {
    FunctionModelItem fun = meta_class->hasToStringCapability();
    int indirections = fun->arguments().at(1)->type().indirections();
    QString deref = QLatin1String(indirections == 0 ? "*" : "");
    s << "QString PythonQtWrapper_" << meta_class->name() << "::toString(" << meta_class->qualifiedCppName() << "* obj) {" << endl; 
    s << "  QString result;" << endl;
    s << "  QDebug d(&result);" << endl;
    s << "  d << " << deref  << "obj;" << endl;
    s << "  return result;" << endl;
    s << "}" << endl << endl;
  }
  
}

void ShellImplGenerator::writeInjectedCode(QTextStream &s, const AbstractMetaClass *meta_class)
{
  CodeSnipList code_snips = meta_class->typeEntry()->codeSnips();
  foreach (const CodeSnip &cs, code_snips) {
    if (cs.language == TypeSystem::ShellCode) {
      s << cs.code() << endl;
    }
  }
}
