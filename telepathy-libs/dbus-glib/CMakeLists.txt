# CMake file for building dbus-glib for Windows
# =============================================
# /CMakeLists.txt

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Define variables
# ================
set (VERSION "0.8.0")

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/..)

include (glib)
include (dbus)
include (expat)
include (gstreamer)
include (libintl)

# Define the solution
# ===================
project("dbus-glib" C) 


IF(UNIX)
   find_package(PkgConfig)
   pkg_check_modules(GLIB glib-2.0)
   pkg_check_modules(DBUS dbus-1)
ENDIF(UNIX)

if(WIN32)

    message("Checking glib")
    #=======================
    find_path(GLIB_INCLUDE_DIR_FOUND glib.h ${GLIB_DIR}/include/glib-2.0/)
	find_path(GLIB_CONFIG_DIR_FOUND glibconfig.h ${GLIB_DIR}/lib/glib-2.0/include/)
    find_path(GLIB_LIB_DIR_FOUND glib-2.0.lib ${GLIB_DIR}/lib/)
    
    if(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)
        set(GLIB_INCLUDE_DIRS "${GLIB_DIR}/include/glib-2.0" "${GLIB_DIR}/lib/glib-2.0/include" "${GLIB_DIR}/lib")
        set(GLIB_LIBRARIES glib-2.0.lib gobject-2.0.lib gmodule-2.0.lib)
        set(GLIB_LIB_DIRS ${GLIB_DIR}/lib)
        set(GLIB_PREFIX ${GLIB_DIR})
        message("glib configured")
        set(GLIB_FOUND TRUE)
    else(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)
        set(GLIB_FOUND FALSE)
        message(FATAL_ERROR "glib not found -> config fails")
    endif(GLIB_INCLUDE_DIR_FOUND AND GLIB_CONFIG_DIR_FOUND AND GLIB_LIB_DIR_FOUND)

    message("Checking dbus")
    #=======================
    find_path(DBUS_INCLUDE_DIR_FOUND dbus.h ${DBUS_INCLUDE_DIR}/dbus)
    find_path(DBUS_LIB_DIR_FOUND dbus-1.lib ${DBUS_LIB_DIR} ${DBUS_LIB_DIR}/release ${DBUS_LIB_DIR}/debug)
    
    if(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
        set(DBUS_INCLUDE_DIRS "${DBUS_INCLUDE_DIR}")
        set(DBUS_LIB_DIRS ${DBUS_LIB_DIR})
        set(DBUS_LIBRARIES debug dbus-1d.lib optimized dbus-1.lib)
        message("dbus configured")
        set(DBUS_FOUND TRUE)
    else(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
        message(${DBUS_LIB_DIR_FOUND})
        message(${DBUS_INCLUDE_DIR_FOUND})
        set(DBUS_FOUND FALSE)
        message(FATAL_ERROR "dbus not found -> config fails")
    endif(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)

    message("checking expat")
    #========================
    message(${EXPAT_INCLUDE_DIR})
    message(${EXPAT_LIB_DIR})
    find_path(expat_include_found expat.h ${EXPAT_INCLUDE_DIR})
    find_path(expat_lib_found libexpat.lib ${EXPAT_LIB_DIR})
    
    if(expat_include_found AND expat_lib_found)
        set(EXPAT_INCLUDE_DIRS ${EXPAT_INCLUDE_DIR})
        set(EXPAT_LIB_DIRS ${EXPAT_LIB_DIR})
        set(EXPAT_LIBRARIES libexpat.lib)
        message("expat configured")
        set(expat_found TRUE)
    else(expat_include_found AND expat_lib_found)
        message(${expat_include_found})
        message(${expat_lib_found})
        set(expat_found false)
        message(FATAL_ERROR "expat not found -> config fails")
    endif(expat_include_found AND expat_lib_found)

    # see if we can do without libintl.h
    # message("check libintl")
    # #=======================
    # message(${GSTREAMER_LIB_DIR})
    # find_path(INTL_LIB_DIR_FOUND intl.lib ${GSTREAMER_LIB_DIR})
    
    # if(INTL_LIB_DIR_FOUND)
        # set(INTL_LIBRARIES intl.lib)
        # set(INTL_LIB_DIRS ${GSTREAMER_LIB_DIR})        
        # #set(INTL_INCLUDE_DIRS ${GLIB_DIR}/include/)
    # else(INTL_LIB_DIR_FOUND)
        # message(${INTL_LIB_DIR_FOUND})
        # #message(${INTL_INCLUDE_DIR_FOUND})
        # set(intl_found false)
        # message(FATAL_ERROR "intl not found -> config fails")
    # endif(INTL_LIB_DIR_FOUND)

	# need gmodule-2.0.lib from gstreamer
	# #=======================
	message(${GSTREAMER_LIB_DIR})
	find_path(GMODULE_DIR_FOUND gmodule-2.0.lib ${GSTREAMER_LIB_DIR})
	if(GMODULE_DIR_FOUND)
		set(GMODULE_LIB_DIR ${GSTREAMER_LIB_DIR})
		set(GMODULE_LIBS gmodule-2.0.lib)
    else(GMODULE_DIR_FOUND)
		message(FATAL_ERROR "gmodule-2.0.lib not found -> config fails")
	endif(GMODULE_DIR_FOUND)
	
    #=======================
    message(${LIBINTL_LIB_DIR})
    find_path(LIBINTL_INCLUDE_DIR_FOUND libintl.h ${LIBINTL_INCLUDE_DIR})
    find_path(INTL_LIB_DIR_FOUND libintl.lib ${LIBINTL_LIB_DIR})
    
    if(INTL_LIB_DIR_FOUND)
        set(INTL_LIBRARIES libintl.lib)
        set(INTL_LIB_DIRS ${LIBINTL_LIB_DIR})        
		set(LIBINTL_INCLUDE_DIRS ${LIBINTL_INCLUDE_DIR})
    else(INTL_LIB_DIR_FOUND)
        message(${INTL_LIB_DIR_FOUND})
        message(${INTL_INCLUDE_DIR_FOUND})
        set(intl_found false)
        message(FATAL_ERROR "intl not found -> config fails")
    endif(INTL_LIB_DIR_FOUND)

message(${LIBINTL_INCLUDE_DIRS})
message(${LIBINTL_INCLUDE_DIRS})
message(${LIBINTL_INCLUDE_DIRS})
	
ENDIF(WIN32)
# Define projects
# ================
add_subdirectory(dbus)
