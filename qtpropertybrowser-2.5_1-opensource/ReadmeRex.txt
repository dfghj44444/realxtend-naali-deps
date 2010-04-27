This folder contain a copy of Qt Property Browser version 2.5_1 (LGPL). You can find the download link 
at http://qt.nokia.com/products/appdev/add-on-products/catalog/4/Widgets/qtpropertybrowser.
This library project has been successfully build in Qt 4.61 version. 
Offical web page have mark the last tested version as Qt 4.5 version.

To install:
- Make sure that you have added system variables for qt, and it should contain all the Qt core dlls and exe files.
- open qt command prompt and go into your library's root folder.
- execute configure.bat -library command and select LGPL licence option and accept the conditions.
- use qmake -spec win32-msvc2008 -tp vc -r command if you are using visual studio 2008 version.
  Note! If you are planing to use a different compiler you can check if it's supported in Qt by looking inside the mkspecs folder 
  switch can be found at build_deps\Qt\mkspecs path.
- If everything went right, now you should see a new visual studio solution inside the library's root folder.
- It seems like some of the QtSolutions_PropertyBrowser-2.5 project's options were messed up in some way 
  and you need to fix them to be able to build the library.
  - Open QtSolutions_PropertyBrowser-2.5 project's properties window.
  - Change QT_QTPROPERTYBROWSER_IMPORT preprocessor definition to QT_QTPROPERTYBROWSER_EXPORT.
  - If you want to compile the example codes in debug you need to change QtSolutions_PropertyBrowser-2.5.lib 
    additional dependencie to QtSolutions_PropertyBrowser-2.5d.lib.

In addition I didn't like the look of the output library file names so i changed them from QtSolutions_PropertyBrowser-2.5 
to QtPropertyBrowser.

I also recommend you to read INSTALL.txt file, it contain more spesific information about the build process.