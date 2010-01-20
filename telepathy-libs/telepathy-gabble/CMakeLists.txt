project(gabble-win32)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /D")

#SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmakemodules)

set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/..)

include (glib)
include (dbus)
include (dbus_glib)
include (expat)
include (loudmouth)
include (telepathy-glib)
include (libsoup)


cmake_minimum_required(VERSION 2.6)
find_package(PkgConfig)

if(UNIX)
pkg_check_modules(GLIB glib-2.0)
pkg_check_modules(LOUDMOUTH loudmouth-1.0)
pkg_check_modules(SOUP libsoup-2.4)
pkg_check_modules(TELEPATHYGLIB telepathy-glib)
endif(UNIX)

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
    
    message("checking expat")
    #========================
    message(${EXPAT_INCLUDE_DIR})
    message(${EXPAT_LIB_DIR})
    find_path(expat_include_found expat.h ${EXPAT_INCLUDE_DIR})
    find_path(expat_lib_found libexpat.lib ${EXPAT_LIB_DIR})
    
    if(expat_include_found AND expat_lib_found)
    #if(expat_include_found)
        set(EXPAT_INCLUDE_DIRS ${EXPAT_INCLUDE_DIR})
        set(EXPAT_LIB_DIRS ${EXPAT_LIB_DIR})
        set(EXPAT_LIBRARIES libexpat.lib)
        message("expat configured")
        set(expat_found TRUE)
    else(expat_include_found AND expat_lib_found)
    #else(expat_include_found)
        message(${expat_include_found})
        message(${expat_lib_found})
        set(expat_found false)
        message(FATAL_ERROR "expat not found -> config fails")
    endif(expat_include_found AND expat_lib_found)
    #endif(expat_include_found)
        
    message("checking loudmouth")
    #============================
    message(${loudmouth_include_dir})
    message(${loudmouth_lib_dir})
    find_path(loudmouth_include_found loudmouth.h ${loudmouth_include_dir}/loudmouth)
    find_path(loudmouth_lib_found loudmouth.lib ${loudmouth_lib_dir} ${loudmouth_lib_dir}/debug ${loudmouth_lib_dir}/release)
    
    if(loudmouth_include_found AND loudmouth_lib_found)
        set(LOUDMOUTH_INCLUDE_DIRS ${loudmouth_include_dir} ${loudmouth_include_dir}/loudmouth)
        set(LOUDMOUTH_LIB_DIRS ${loudmouth_lib_dir})
        set(LOUDMOUTH_LIBRARIES loudmouth.lib)
        message("loudmouth configured")
        set(loudmouth_found true)
    else(loudmouth_include_found AND loudmouth_lib_found)
        message(${loudmouth_include_found})
        message(${loudmouth_lib_found})
        set(loudmouth_found false)
        message(FATAL_ERROR "loudmouth not found -> config fails")
    endif(loudmouth_include_found AND loudmouth_lib_found)

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
    
    message("checking libsoup")
    #============================
    message(${LIBSOUP_INCLUDE_DIR})
    message(${LIBSOUP_LIB_DIR})
    find_path(LIBSOUP_INCLUDE_FOUND soup.h ${LIBSOUP_INCLUDE_DIR}/libsoup)
    find_path(LIBSOUP_LIB_FOUND soup-2.4.lib ${LIBSOUP_LIB_DIR}/Debug ${LIBSOUP_LIB_DIR}/Release)
    
    if(LIBSOUP_INCLUDE_FOUND AND LIBSOUP_LIB_DIR)
        set(LIBSOUP_INCLUDE_DIRS ${LIBSOUP_INCLUDE_DIR})
        set(LIBSOUP_LIB_DIRS ${LIBSOUP_LIB_DIR})
        set(LIBSOUP_LIBRARIES soup-2.4.lib)
        message("libsoup configured")
        set(LIBSOUP_FOUND true)
    else(LIBSOUP_INCLUDE_FOUND AND LIBSOUP_LIB_DIR)
        message(${LIBSOUP_INCLUDE_FOUND})
        message(${LIBSOUP_LIB_DIR})
        set(LIBSOUP_FOUND false)
        message(FATAL_ERROR "libsoup not found -> config fails")
    endif(LIBSOUP_INCLUDE_FOUND AND LIBSOUP_LIB_DIR)

    
   
ENDIF(WIN32)

SET(XMLSOURCES
   all.xml
)
#TODO
#move to this code to src 
file (MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/extensions/_gen")


file(GLOB  CSOURCE "${CMAKE_SOURCE_DIR}/src/*.c")
file(GLOB  GIBBERSOURCE "${CMAKE_SOURCE_DIR}/lib/gibber/*.c")

FIND_PROGRAM(GCODEGEN glib-genmarshal ${GLIB_RUNTIME})
FIND_PROGRAM(XSLTPROC  xsltproc ${XSLTPROC_PATH})
FIND_PROGRAM(PYTHON  python)
SET(SORT_APP  "sort")
SET(CAT_APP  "cat")

IF(WIN32)
SET(SORT_APP ${SORT_PROG}) #Provide the sort program on windows
SET(CAT_APP ${CAT_PROG}) #Provide the sort program on windows
ENDIF(WIN32)

FOREACH(XMLFILE ${XMLSOURCES})
MESSAGE("Processing :" ${XMLFILE})
EXECUTE_PROCESS(COMMAND ${XSLTPROC} "--nonet" "--novalid" "--xinclude" ${CMAKE_SOURCE_DIR}/tools/identity.xsl
                 ${CMAKE_SOURCE_DIR}/extensions/${XMLFILE}
                 OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/${XMLFILE})

EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools/glib-signals-marshal-gen.py ${CMAKE_SOURCE_DIR}/extensions/_gen/${XMLFILE}
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.list)

EXECUTE_PROCESS(COMMAND "echo" "#include \"${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.h\""
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal_a.tmp
                )
EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--body" "--prefix=_gabble_ext_marshal" ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal_b.tmp
                )
EXECUTE_PROCESS(COMMAND ${CAT_APP} ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal_a.tmp ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal_b.tmp
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.c)

EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--header" "--prefix=_gabble_ext_marshal" ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.list 
               OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.h)

#gabble 

EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools/c-constants-gen.py "Gabble" "${CMAKE_SOURCE_DIR}/extensions/_gen/all.xml"
               OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/enums.h)

EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools/glib-gtypes-generator.py  ${CMAKE_SOURCE_DIR}/extensions/_gen/all.xml ${CMAKE_SOURCE_DIR}/extensions/_gen/gtypes Gabble)

#we can't pipe so we will do this by saving each stage in to files
FOREACH(X ${CSOURCE})
EXECUTE_PROCESS(COMMAND "sed" "-n" "-e" "s/.*gabble_marshal_\\([[:upper:][:digit:]]*__[[:upper:][:digit:]_]*\\).*/\\1/p"
                ${X} 
                OUTPUT_VARIABLE OUT)
                file(APPEND ${CMAKE_SOURCE_DIR}/extensions/_gen/meta ${OUT})
MESSAGE("Processing : ${X}")
ENDFOREACH(X)

EXECUTE_PROCESS(COMMAND "sed" "-e" "s/__/:/"  "-e" "y/_/,/" ${CMAKE_SOURCE_DIR}/extensions/_gen/meta
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/meta2
                )

EXECUTE_PROCESS(COMMAND ${SORT_APP} "-u" ${OUT_TWO} ${CMAKE_SOURCE_DIR}/extensions/_gen/meta2
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/extensions/_gen/gabble-signals-marshal.list)

EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--header" "--prefix=gabble_marshal" ${CMAKE_SOURCE_DIR}/extensions/_gen/gabble-signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/src/gabble-signals-marshal.h)

EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--body" "--prefix=gabble_marshal" ${CMAKE_SOURCE_DIR}/extensions/_gen/gabble-signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/src/gabble-signals-marshal.c)


EXECUTE_PROCESS(COMMAND ${PYTHON}  ${CMAKE_SOURCE_DIR}/tools/glib-ginterface-gen.py
                "--filename=${CMAKE_SOURCE_DIR}/extensions/_gen/svc" "--signal-marshal-prefix=_gabble_ext"
                "--include=<telepathy-glib/dbus.h>" "--include=_gen/signals-marshal.h"
                "--allow-unstable"
                "--not-implemented-func=tp_dbus_g_method_return_not_implemented"
                ${CMAKE_SOURCE_DIR}/extensions/_gen/all.xml "Gabble_Svc_"
                 )

EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools//glib-interfaces-gen.py  "Gabble" ${CMAKE_SOURCE_DIR}/extensions/_gen/interfaces-body.h ${CMAKE_SOURCE_DIR}/extensions/_gen/interfaces.h ${CMAKE_SOURCE_DIR}/extensions/_gen/all.xml)

ENDFOREACH(XMLFILE)


#Gibber!
#I know this, is bad
#TODO:: avoid duplication of commands, maybe a cmake function ?

#we can't pipe so we will do this by saving each stage in to files
FOREACH(Y ${GIBBERSOURCE})
EXECUTE_PROCESS(COMMAND "sed" "-n" "-e" "s/.*_gibber_signals_marshal_\\([[:upper:][:digit:]]*__[[:upper:][:digit:]_]*\\).*/\\1/p"
                ${Y} 
                OUTPUT_VARIABLE OUT_GIBBER)
                file(APPEND ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/meta ${OUT_GIBBER})
MESSAGE("Processing : ${OUT_GIBBER}")
ENDFOREACH(Y)

EXECUTE_PROCESS(COMMAND "sed" "-e" "s/__/:/"  "-e" "y/_/,/" ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/meta
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/meta2
                )

EXECUTE_PROCESS(COMMAND ${SORT_APP} "-u" "${CMAKE_SOURCE_DIR}/lib/gibber/_gen/meta2"
	                                   OUTPUT_FILE ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/gibble-signals-marshal.list)
message("Process----------------->")
EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--header" "--prefix=_gibber_signals_marshal" ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/gibble-signals-marshal.list
   OUTPUT_FILE ${CMAKE_SOURCE_DIR}/lib/gibber/gibber-signals-marshal.h)


FILE(WRITE  ${CMAKE_SOURCE_DIR}/lib/gibber/gibber-signals-marshal.c "#include <gibber-signals-marshal.h>")

EXECUTE_PROCESS(COMMAND ${GCODEGEN} "--body" "--prefix=_gibber_signals_marshal" ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/gibble-signals-marshal.list
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/lib/gibber/gibber-signals-marshal.c
                )
             FILE(APPEND  ${CMAKE_SOURCE_DIR}/lib/gibber/gibber-signals-marshal.c  ${GIBBER_C})


#config.h ?
CONFIGURE_FILE(config.h.cmake ${CMAKE_SOURCE_DIR}/src/config.h)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/extensions/_gen/
                    ${CMAKE_SOURCE_DIR}/
                    ${CMAKE_SOURCE_DIR}/lib
                    ${CMAKE_SOURCE_DIR}/lib/gibber
                    ${CMAKE_SOURCE_DIR}/lib/gibber/_gen/
                    ${CMAKE_SOURCE_DIR}/extensions
                    )

include(CheckIncludeFile)

check_include_file(dirent.h     HAVE_DIRENT_H)
check_include_file(arpa/inet.h   HAVE_ARPA_INET_H)
check_include_file(arpa/nameser_compat.h  HAVE_ARPA_NAMESER_COMPAT_H)
check_include_file(dlfcn.h HAVE_DLFCN_H)
check_include_file(fcntl.h HAVE_FCNTL_H)
check_include_file(memory.h HAVE_MEMORY_H)
check_include_file(inttypes.h HAVE_INTTYPES_H)
check_include_file(unistd.h HAVE_UNISTD_H)
check_include_file(sys/types.h HAVE_SYS_TYPES_H)
check_include_file(sys/stat.h HAVE_SYS_STAT_H)
check_include_file(string.h HAVE_STRING_H)
check_include_file(stdlib.h HAVE_STDLIB_H)


CONFIGURE_FILE(config.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

add_subdirectory(lib/gibber)
add_subdirectory(src)

