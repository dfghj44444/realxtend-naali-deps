For building telepathy-gabble you need to configure these *.cmake files:

dbus.cmake
dbus_glib.cmake
expat.cmake
glib.cmake
loudmouth.cmake
libsoup.cmake
telepathy-glib.cmake

Also you need to build telepathy-glib first

You also need sort.exe (windows sort wont do) python installed, XSLTPROC.exe and cat.exe
In cmake command below we use cygwin sort and xsltproc exes.

Run cmake command with these parameters:

cmake -G "Visual Studio 9 2008" -DXSLTPROC_PATH="C:\cygwin\bin" -DSORT_PROG="C:\cygwin\bin\sort.exe" -DCAT_PROG="C:\cygwin\bin\cat.exe"

Open created sollution file.
Build the sollution
