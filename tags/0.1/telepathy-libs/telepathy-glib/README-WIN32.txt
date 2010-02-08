To build telepathy-glib you need to configure these *.cmake files:

dbus.cmake
dbus_glib.cmake
expat.cmake
glib.cmake
gstreamer.cmake

You also need sort.exe (windows sort wont do) python installed and glib-genmarshal.
In cmake command below we use cygwin sort and glib-genmarshal exes.

Run cmake command with these parameters:

cmake -G "Visual Studio 9 2008" -DGGEN="C:\cygwin\bin\glib-genmarshal.exe" -DSORT_PROG=C:\cygwin\bin\sort.exe -DLIB_TYPE=SHARED

There's 2 assertion errors, you can ignore them.

Open created sollution file.
Build the sollution