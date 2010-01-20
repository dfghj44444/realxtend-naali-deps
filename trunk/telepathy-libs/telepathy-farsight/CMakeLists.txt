# CMake file for building telepathy-farsight for Windows
# ==================================================
# /CMakeLists.txt

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

project(telepathy-farsight)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/..)

include (glib)
include (dbus)
include (dbus_glib)
include (telepathy-glib)
include (gstreamer)

IF(WIN32)
SET(SORT_APP ${SORT_PROG}) #Provide the sort program on windows
SET(GCODEGEN ${GLIB_GENMARSHAL_PROG}) #Provide the glib-genmarshal program on windows
ENDIF(WIN32)

# include folders & libraries
If(WIN32)

    message("Checking glib")
    #=======================
    find_path(GLIB_INCLUDE_DIR_FOUND glib.h ${GLIB_DIR}/include/glib-2.0/)
	find_path(GLIB_CONFIG_DIR_FOUND glibconfig.h ${GLIB_DIR}/lib/glib-2.0/include/)
    find_path(GLIB_LIB_DIR_FOUND glib-2.0.lib ${GLIB_DIR}/lib/)
    
    if(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)
        set(GLIB_INCLUDE_DIRS "${GLIB_DIR}/include/glib-2.0" "${GLIB_DIR}/lib/glib-2.0/include" "${GLIB_DIR}/lib")
        set(GLIB_LIBRARIES glib-2.0.lib gobject-2.0.lib gmodule-2.0.lib gthread-2.0.lib)
        set(GLIB_LIB_DIRS ${GLIB_DIR}/lib)
        set(GLIB_PREFIX ${GLIB_DIR})
        message("glib configured")
        set(GLIB_FOUND TRUE)
    else(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)
        set(GLIB_FOUND FALSE)
        message(${GLIB_INCLUDE_DIR_FOUND})
        message(${GLIB_CONFIG_DIR_FOUND})
        message(${GLIB_LIB_DIR_FOUND})
        message(FATAL_ERROR "glib not found -> config fails")
    endif(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)

    message("Checking dbus")
    #=======================
    find_path(DBUS_INCLUDE_DIR_FOUND dbus.h ${DBUS_INCLUDE_DIR}/dbus)
    find_path(DBUS_LIB_DIR_FOUND dbus-1.lib ${DBUS_LIB_DIR}/release ${DBUS_LIB_DIR})
    
    if(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
        set(DBUS_INCLUDE_DIRS "${DBUS_INCLUDE_DIR}")
        set(DBUS_LIB_DIRS ${DBUS_LIB_DIR} debug ${DBUS_LIB_DIR}/debug optimized ${DBUS_LIB_DIR}/release)
        set(DBUS_LIBRARIES debug dbus-1d.lib optimized dbus-1.lib)
        #set(DBUS_LIBRARIES dbus-1d.lib)
        message("dbus configured")
        set(DBUS_FOUND TRUE)
    else(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
        message(${DBUS_LIB_DIR_FOUND})
        message(${DBUS_INCLUDE_DIR_FOUND})
        set(DBUS_FOUND FALSE)
        message(FATAL_ERROR "dbus not found -> config fails")
    endif(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
    
    message("checking dbus-glib")
    #============================
    find_path(dbus_glib_include_found dbus-glib.h ${DBUS_GLIB_INCLUDE_DIR}/dbus)
    find_path(dbus_glib_lib_dir_found dbus-glib.lib ${DBUS_GLIB_LIB_DIR} ${DBUS_GLIB_LIB_DIR}/release ${DBUS_GLIB_LIB_DIR}/debug)
    
    if(dbus_glib_include_found AND dbus_glib_lib_dir_found)
        set(DBUS_GLIB_INCLUDE_DIRS ${DBUS_GLIB_INCLUDE_DIR})
        set(DBUS_GLIB_LIB_DIRS ${DBUS_GLIB_LIB_DIR} ${DBUS_GLIB_LIB_DIR}/release ${DBUS_GLIB_LIB_DIR}/debug)
        set(DBUS_GLIB_LIBRARIES dbus-glib.lib)
        message("dbus-glib configured")
        set(dbus_glib_found TRUE)
    else(dbus_glib_include_found AND dbus_glib_lib_dir_found)
        message(${dbus_glib_include_found})
        message(${dbus_glib_lib_dir_found})
        set(dbus_glib_found false)
        message(FATAL_ERROR "dbus-glib not found -> config fails")
    endif(dbus_glib_include_found AND dbus_glib_lib_dir_found)
    
    message("checking telepathy-glib")
    #============================
    message(${TELEPATHY_GLIB_INCLUDE_DIR})
    message(${TELEPATHY_GLIB_LIB_DIR})
    find_path(TELEPATHY_GLIB_INCLUDE_FOUND message-mixin.h ${TELEPATHY_GLIB_INCLUDE_DIR}/telepathy-glib)
    find_path(TELEPATHY_GLIB_LIB_FOUND telepathy-glib.lib ${TELEPATHY_GLIB_LIB_DIR}/Debug ${TELEPATHY_GLIB_LIB_DIR}/Release)
    
    if(TELEPATHY_GLIB_INCLUDE_FOUND AND TELEPATHY_GLIB_LIB_DIR)
        set(TELEPATHY_GLIB_INCLUDE_DIRS ${TELEPATHY_GLIB_INCLUDE_DIR})
        set(TELEPATHY_GLIB_LIB_DIRS ${TELEPATHY_GLIB_LIB_DIR})
        set(TELEPATHY_GLIB_LIBRARIES telepathy-glib.lib)
        message("telepathy-glib configured")
        set(TELEPATHY_GLIB_FOUND true)
    else(TELEPATHY_GLIB_INCLUDE_FOUND AND TELEPATHY_GLIB_LIB_DIR)
        message(${TELEPATHY_GLIB_INCLUDE_FOUND})
        message(${TELEPATHY_GLIB_LIB_DIR})
        set(TELEPATHY_GLIB_FOUND false)
        message(FATAL_ERROR "telepathy-glib not found -> config fails")
    endif(TELEPATHY_GLIB_INCLUDE_FOUND AND TELEPATHY_GLIB_LIB_DIR)

    message("Checking gstreamer")
    #=======================
    find_path(GSTREAMER_INCLUDE_DIR_FOUND gst.h ${GSTREAMER_INCLUDE_DIR}/gst)
    find_path(GSTREAMER_LIB_DIR_FOUND gstreamer.lib ${GSTREAMER_LIB_DIR})
    
    if(GSTREAMER_INCLUDE_DIR_FOUND AND GSTREAMER_LIB_DIR_FOUND)
        set(GSTREAMER_INCLUDE_DIRS "${GSTREAMER_INCLUDE_DIR}" " ${LIBXML2_INCLUDE_DIR}")
        set(GSTREAMER_LIBRARIES gstreamer.lib gstfarsight.lib xml2.lib)
        set(GSTREAMER_LIB_DIRS ${GSTREAMER_LIB_DIR})
        message("GSTREAMER configured")
        set(GSTREAMER_FOUND TRUE)
    else(GSTREAMER_INCLUDE_DIR_FOUND AND GSTREAMER_LIB_DIR_FOUND)
        set(GSTREAMER_FOUND FALSE)
        message(${GSTREAMER_INCLUDE_DIR_FOUND})
        message(${GSTREAMER_LIB_DIR_FOUND})
        message(FATAL_ERROR "GSTREAMER not found -> config fails")
    endif(GSTREAMER_INCLUDE_DIR_FOUND AND GSTREAMER_LIB_DIR_FOUND)

ENDIF(WIN32)


# File genesis
# ============
IF(WIN32)
file(GLOB  CSOURCE "${CMAKE_SOURCE_DIR}/telepathy-farsight/*.c" "${CMAKE_SOURCE_DIR}/telepathy-farsight/*.h")

EXECUTE_PROCESS(COMMAND "cd" "telepathy-farsight")

FOREACH(X ${CSOURCE})
EXECUTE_PROCESS(COMMAND "sed" "-n" "-e" "s/.*tf_marshal_\\([[:upper:][:digit:]]*__[[:upper:][:digit:]_]*\\).*/\\1/p"
                ${X} 
                OUTPUT_VARIABLE OUT)
                file(APPEND ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/meta ${OUT})
MESSAGE("Processing : ${X}")
ENDFOREACH(X)

EXECUTE_PROCESS(COMMAND "sed" "-e" "s/__/:/"  "-e" "y/_/,/" ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/meta
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/meta2
                )

EXECUTE_PROCESS(COMMAND ${SORT_APP} "-u" ${OUT_TWO} ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/meta2
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/tf-signals-marshal.list)

message(${GCODEGEN})                
EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--header" "--prefix=_tf_marshal" ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/tf-signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-farsight/tf-signals-marshal.h)

EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--body" "--prefix=_tf_marshal" ${CMAKE_SOURCE_DIR}/telepathy-farsight/_gen/tf-signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-farsight/tf-signals-marshal.c)
                
ENDIF(WIN32)
                
# Define projects
# ================
add_subdirectory(telepathy-farsight)
