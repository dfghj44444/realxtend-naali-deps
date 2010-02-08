
    Building Telepathy libraries on windows
    =======================================

(These instructions are not tested)
For building telepathy libraries on win32 (with Visual Studio 9 2008 express edition)
you need libraries listed below:

dbus
dbus-glib
expat
glib
loudmouth 
openssl
telepathy_glib
libsoup
openssl
QtDbus
telepathy-qt4
intl
gstreamer
telepathy-farsight

These instructions are divided to 2 parts: Part 1: non Qt related telepathy components and
Part 2 Qt related telepathy components (QtDbus & telepathy-qt4) at the end of this readme



    Part 1. non Qt related telepathy components
    ===========================================

    
you need to configure right include and library paths to each library in *.cmake
file on the telepathy root for these files so that cmake is able to find these libraries
when building each telepathy component, When configuring paths to libraries write paths 
in the following format (using "/" instead of "\"):
set(EXPAT_INCLUDE_DIR "C:/Program Files/Expat 2.0.1/Source/lib")

Specific build instructions for each component are inside each component folder (README-WIN32.txt file).
CMakeFiles used here are based on earlier versions cmake builds of telepathy libraries made by Siraj Razick.
Component folders also contain patch files for making libs work on win32, they are already applied.
Current versions of libraries here are loudmouth 1.4.3, telepathy_glib 0.7.37 and telepathy-gabble 0.8.3

Below are lists where some libraries can be found (that are not included in viewer dependencies):

openssl:
========
Download openssl-0.9.8h-1-bin.zip and openssl-0.9.8h-1-lib.zip package 
(you need both headers and libs + binaries)
you can get them from here:
http://sourceforge.net/projects/gnuwin32/files/openssl/


libsoup:
========
We are using version that comes with gstreamer, see the guides for gstreamer
in the libsoup.cmake set the include path to point "include/libsoup-2.4"
and set lib path to point to lib folder inside gstreamers dev installation.

expat:
======
http://sourceforge.net/projects/expat/

dbus:
=====
You can use binaries loaded from here:
http://sourceforge.net/projects/windbus/
create libs from dll:
http://support.microsoft.com/kb/131313
rename the dll's and lib's by removing the lib from front (we use windows style dll/lib names)
and headers from:
https://windbus.svn.sourceforge.net/svnroot/windbus/trunk

glib + intl:
============
Get the windows dev package all-in-one bundle of the GTK+ stack including 3rd-party dependencies from:
http://www.gtk.org/download-windows.html

gstreamer:
==========
Download development package from:
http://www.gstreamer-winbuild.ylatuya.es/doku.php?id=download
install the package



    Part 2. Qt related telepathy components
    =======================================

0. Requirements
===============
Working Gabble & Dbus-daemon configuration

1. QtDbus
=========

- Open Qt command prompt
- Go to your Qt root path (the Qt distribution you've compiled for msvc, not sure if this works for Qt mingw configuration)
Qt root refers here to folder where you have Qt bin folder containing qmake.exe, etc..
- In Qt root folder go to src/dbus
- Run 
qmake
qmake -r dbus.pro -tp vc -spec win32-msvc2008

This should create visual studio project files for building QtDbus in msvc2008

Open up the project file: QtDBus.vcproj, 
- Add path to dbus root source folder in compiler options: Additional include paths in QtDbus project properties.
- Add path to dbus-1d.lib or dbus-1.lib in linker options: Addtional Library Directories in QtDbus project properties.
Project should now build


2. telepathy-qt4
================
(practically modified instructions from http://telepathy.freedesktop.org/wiki/Windows)

- Download latest snapshot of the cmake branch from telepathy-qt4 from this site:
http://git.collabora.co.uk/?p=user/imonroe/telepathy-qt4-cmake.git;a=summary

- unzip and go to folder root
- run cmake . (this should generate all generated files and create msvc sollution files)
- Open up sollution file
- For being able to succesfully build sollution you'll need to unload clean-git and clone projects
- Furthermore you'll need to go to TelepathyQt4 folder and change name of file named "Debug" to "Debug_"
- After that you'll need to change references in source code:
	Change all "#include <TelepathyQt4/Debug>" to "#include <TelepathyQt4/Debug_>" 
	(Use search and replace window ctrl + h)
- Add missing references,.. QtDbus and stuff, -> build
- When running you'll also need dbus-1.dll


3. Testing & Notes
==================
You can test the telepathy-qt4 with roster example (with wef modifications), for that you need to copy dll (debug or release versions) to running 
directory (or you need to have the dlls in path):
dbus-1.dll
QtDBusd4.dll

Note that if you use dbus-1d.dll, you'll need to go into QtDbusd4 sources and change the reference from dbus-1 to dbus-1d at dbus 
lib loading method:
search for bool qdbus_loadLibDBus() method
there change the 
lib->setFileName(QLatin1String("dbus-1")); to refer to dbus-1d

At least I had problems with gabble crashing when I ran the roster example so I did the changes below:
At the roster example change the command line parameters to include also the server parameter, so that in
void RosterWindow::onCMReady(Tp::PendingOperation *op) method
you'll add:
params.insert("server", QVariant(mServer));
to parameters send to Connection manager
and just code the needed things to pass that parameter.