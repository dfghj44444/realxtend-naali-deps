Copy the content of this folder to 'C:\Qt\build' and set QTDIR windows system variable to point to that folder.
Naalis build system will fetch information/libs/includes from QTDIR when you run cmake. We cannot do nothing about the hard coded path due Qt places this path to some of the binary files when its build. We have made a custom build of Naali because we need OpenSSL and QDbus enabled.

For more information check realXtend Naali build instructions from http://wiki.realxtend.org/