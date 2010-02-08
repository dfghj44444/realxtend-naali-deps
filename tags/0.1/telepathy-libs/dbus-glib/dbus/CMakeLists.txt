# CMake file for building dbus-glib for Windows
# =============================================
# /dbus/CMakeLists.txt


# Define the source files
# =======================
set(DBUS_GLIB_INTERNALS 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gtype-specialized.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gutils.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gsignature.c
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gsignature.h 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gvalue-utils.c
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gvalue.c)
set(DBUS_GTOOL_SOURCES
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gidl.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gloader-expat.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gparser.c
    ${CMAKE_SOURCE_DIR}/dbus/dbus-glib-tool.c)
set(DBUS_GLIB_SOURCES
    ${CMAKE_SOURCE_DIR}/dbus/dbus-glib.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gmain.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gmarshal.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gobject.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gproxy.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gtest-main.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gtest.c 
    ${CMAKE_SOURCE_DIR}/dbus/dbus-gthread.c)


# Define include dirs
# ===================
set(DBUS_GLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/dbus)
include_directories(${DBUS_GLIB_INCLUDE_DIR} ${GLIB_INCLUDE_DIRS} ${GLIB_INCLUDE_DIRS}/include ${DBUS_INCLUDE_DIRS} ${EXPAT_INCLUDE_DIR} ${LIBINTL_INCLUDE_DIRS})

# Define link dirs
# ================
link_directories(${GLIB_LIB_DIRS} ${DBUS_LIB_DIRS} ${EXPAT_LIB_DIRS} ${INTL_LIB_DIRS} ${GMODULE_LIB_DIR})

# Define the project dbus-glib
# ============================
add_library(dbus-glib ${LIB_TYPE} 
    ${DBUS_GLIB_INTERNALS}
    ${DBUS_GLIB_SOURCES}
    ${CMAKE_SOURCE_DIR}/dbus/dbus-glib.def)

set_target_properties(dbus-glib PROPERTIES PROJECT_LABEL "DBus-Glib")

# Define the project dbus-binding-tool
# ====================================
add_executable(dbus-binding-tool
    ${DBUS_GLIB_INTERNALS}
    ${DBUS_GTOOL_SOURCES}
    ${DBUS_GLIB_SOURCES}
    ${CMAKE_SOURCE_DIR}/dbus/dbus-binding-tool-glib.c
    ${CMAKE_SOURCE_DIR}/dbus/dbus-glib-tool.c)



target_link_libraries(dbus-glib ${GLIB_LIBRARIES}
                                ${DBUS_LIBRARIES}
                                ${EXPAT_LIBRARIES}
                                ${INTL_LIBRARIES}
                                ${WINLIBS}
								${GMODULE_LIBS}
   )
add_definitions(-DDBUS_INSIDE_DBUS_H -DDBUS_COMPILATION)
add_definitions(-DVERSION=\"${VERSION}\")
add_definitions(-DDBUS_LOCALEDIR=${DBUS_LOCALEDIR})
add_definitions(-DGETTEXT_PACKAGE=${GETTEXT_PACKAGE})

set(location "lib")

if(${LIB_TYPE})
 set(location "bin")
ENDIF(${LIB_TYPE})

INSTALL(TARGETS dbus-glib DESTINATION ${CMAKE_INSTALL_PREFIX}/${location}/)
install_files(/include/dbus/ FILES ${header_files_for_dbus_glib})


