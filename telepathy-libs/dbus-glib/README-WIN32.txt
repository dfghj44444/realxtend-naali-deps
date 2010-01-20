For building dbus-glib you need to configure these *.cmake files:

glib.cmake
dbus.cmake
expat.cmake
gstreamer.cmake -- needed for intl.lib

Run cmake command with these parameters:

cmake -G "Visual Studio 9 2008" -DLIB_TYPE=SHARED

Open created sollution file.
Build dbus-glib project (dbus-binding-tool wont build, but we wont need it)

create libs from dll for linking with other libs, put switch for creating import lib on or do this:
http://support.microsoft.com/kb/131313

