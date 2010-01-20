# CMake generated Testfile for 
# Source directory: C:/Qt/telepathy-qt4-0.1.10_2/tests
# Build directory: C:/Qt/telepathy-qt4-0.1.10_2/tests
# 
# This file replicates the SUBDIRS() and ADD_TEST() commands from the source
# tree CMakeLists.txt file, skipping any SUBDIRS() or ADD_TEST() commands
# that are excluded by CMake control structures, i.e. IF() commands.
ADD_TEST(KeyFile "SH-NOTFOUND" "C:/Qt/telepathy-qt4-0.1.10_2/tests/runGenericTest.sh" "C:/Qt/telepathy-qt4-0.1.10_2/tests/test-key-file")
ADD_TEST(ManagerFile "SH-NOTFOUND" "C:/Qt/telepathy-qt4-0.1.10_2/tests/runGenericTest.sh" "C:/Qt/telepathy-qt4-0.1.10_2/tests/test-manager-file")
SUBDIRS(dbus-1/services)
SUBDIRS(lib)
SUBDIRS(dbus)
SUBDIRS(pinocchio)
