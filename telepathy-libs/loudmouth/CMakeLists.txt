# CMake file for building loudmouth for Windows
# =============================================


CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/..)

include (glib)
include (openssl)

if(WIN32)
    # Checks for needed iclude files and libs --> these parts will ultimately be moved to other ".cmake" include files and used in other tp-libs as well
    
    message("Checking glib")
    #======================#
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

    message("Checking openssl")
    #=========================#
    find_path(OPENSSL_INCLUDE_DIR_FOUND ssl.h "${OPENSSL_INCLUDE_DIR}/openssl/")
    find_path(OPENSSL_LIB_DIR_FOUND libeay32.lib ${OPENSSL_LIB_DIR})
    
    if(OPENSSL_INCLUDE_DIR_FOUND AND OPENSSL_LIB_DIR_FOUND)
        set(OPENSSL_INCLUDE_DIRS ${OPENSSL_INCLUDE_DIR})
        set(OPENSSL_LIBRARIES libeay32.lib libssl32.lib)
        set(OPENSSL_LIB_DIRS ${OPENSSL_LIB_DIR})
        message("openssl configured")
        set(OPENSSL_FOUND TRUE)
    else(OPENSSL_INCLUDE_DIR_FOUND AND OPENSSL_LIB_DIR_FOUND)
        message(${OPENSSL_INCLUDE_DIR_FOUND})
        message(${OPENSSL_LIB_DIR_FOUND})
        set(OPENSSL_FOUND FALSE)
        message(FATAL_ERROR "openssl not found -> config fails")
    endif(OPENSSL_INCLUDE_DIR_FOUND AND OPENSSL_LIB_DIR_FOUND)
    
endif(WIN32)


# Define the solution
# ===================
project(loudmouth C) 
set (VERSION 1.4.3)


# Define projects
# ================
add_subdirectory(loudmouth)
#add_subdirectory(examples)

