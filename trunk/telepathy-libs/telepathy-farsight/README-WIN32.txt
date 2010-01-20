For building telepathy-farsight you need to configure these *.cmake files:

glib.cmake
dbus.cmake
dbus_glib.cmake
telepathy-glib.cmake
gstreamer.cmake

Also you need to build telepathy-glib first

You also need sort.exe (windows sort wont do) and glib_genmarshal.exe
In cmake command below we use cygwin sort and glib-genmarshal exes.
You can get glib-genmarshal to cygwin by getting the glib tools in cygwin.

cmake -G "Visual Studio 9 2008" -DSORT_PROG="C:\cygwin\bin\sort.exe" -DGLIB_GENMARSHAL_PROG="C:\cygwin\bin\glib-genmarshal.exe"

Open created sollution file.
Build the sollution
