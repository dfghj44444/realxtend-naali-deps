# CMake file for building telepathy-glib for Windows
# ==================================================
# /CMakeLists.txt

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Define variables
# ================
set(VERSION "0.9.2.1")
#set(CMAKE_SYSTEM_PREFIX_PATH ${CMAKE_SOURCE_DIR}/..) # the *-config.cmake files are located here


set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/..)


set (TARGET_NAME "telepathy-glib.dll")

include (glib)
include (dbus)
include (dbus_glib)
include (expat)
include (loudmouth)


# Define the solution
# ===================
project("telepathy-glib" C)


# Define external libraries
# ========================= 
if(WIN32)
    # Checks for needed iclude files and libs --> these parts will ultimately be moved to other ".cmake" include files and used in other tp-libs as well
    # TODO check the lib names
    
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
    find_path(DBUS_LIB_DIR_FOUND dbus-1.lib ${DBUS_LIB_DIR})
    
    if(DBUS_LIB_DIR_FOUND AND DBUS_INCLUDE_DIR_FOUND)
        set(DBUS_INCLUDE_DIRS "${DBUS_INCLUDE_DIR}")
        set(DBUS_LIB_DIRS ${DBUS_LIB_DIR})
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
    find_path(dbus_glib_lib_dir_found dbus-glib.lib ${DBUS_GLIB_LIB_DIR}/release)
    
    if(dbus_glib_include_found AND dbus_glib_lib_dir_found)
        set(DBUS_GLIB_INCLUDE_DIRS ${DBUS_GLIB_INCLUDE_DIR})
        set(DBUS_GLIB_LIB_DIRS ${DBUS_GLIB_LIB_DIR} ${DBUS_GLIB_LIB_DIR}/release)
        #set(DBUS_GLIB_LIB_DIRS ${DBUS_GLIB_LIB_DIR}/release)
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
        
    message("checking loudmouth")
    #============================
    message(${loudmouth_include_dir})
    message(${loudmouth_lib_dir})
    find_path(loudmouth_include_found loudmouth.h ${loudmouth_include_dir})
    find_path(loudmouth_lib_found loudmouth.lib ${loudmouth_lib_dir})
    
    if(loudmouth_include_found AND loudmouth_lib_found)
        set(LOUDMOUTH_INCLUDE_DIRS ${loudmouth_include_dir})
        set(LOUDMOUTH_LIB_DIRS ${loudmouth_lib_dir})
        set(loudmouth_libraries loudmouth.lib)
        message("expat configured")
        set(loudmouth_found true)
    else(loudmouth_include_found AND loudmouth_lib_found)
        message(${loudmouth_include_found})
        message(${loudmouth_lib_found})
        set(loudmouth_found false)
        message(FATAL_ERROR "loudmouth not found -> config fails")
    endif(loudmouth_include_found AND loudmouth_lib_found)

ENDIF(WIN32)


if(UNIX)
find_package(PkgConfig)
pkg_check_modules(GLIB glib-2.0)
pkg_check_modules(DBUS dbus-1)
pkg_check_modules(DBUS_GLIB dbus-glib-1)
endif(UNIX)

# macros
#============
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen)
FIND_PROGRAM(PYTHON python)
FIND_PROGRAM(GGEN  glib-genmarshal ${GLIB_RUNTIME})
#FIND_PROGRAM(XSLTPROC  xsltproc ${XSLTPROC_PATH})

macro (xslt_to_pyrun script  in1 in2 out)
EXECUTE_PROCESS(COMMAND ${PYTHON} "${CMAKE_SOURCE_DIR}/tools/${script}" "${in1}" "${in2}"
                OUTPUT_FILE ${out})
endmacro(xslt_to_pyrun)

macro (pyrun_glib_ginterface_gen in1 in2)
message(${in1})
GET_FILENAME_COMPONENT(PREFIX ${in1} NAME_WE)
message(${PREFIX})
EXECUTE_PROCESS(COMMAND ${PYTHON} "${CMAKE_SOURCE_DIR}/tools/glib-ginterface-gen.py"
                   "--filename=${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-svc-${PREFIX}"
                   "--signal-marshal-prefix=_tp"
                   "--include=<telepathy-glib/dbus.h>"
                   "--include=_gen/signals-marshal.h"
                   "--not-implemented-func=tp_dbus_g_method_return_not_implemented"
                   "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-spec-${in1}"
                   "Tp_Svc_"
				   )
endmacro(pyrun_glib_ginterface_gen)

macro (pyrun_a script  in out)
EXECUTE_PROCESS(COMMAND ${PYTHON} "${CMAKE_SOURCE_DIR}/tools/${script}" "${in}"
                OUTPUT_FILE ${out})
endmacro(pyrun_a)

macro (pyrun_b script  in out prefix)
EXECUTE_PROCESS(COMMAND ${PYTHON} "${CMAKE_SOURCE_DIR}/tools/${script}" "${in}" "${prefix}"
                OUTPUT_FILE ${out})
endmacro(pyrun_b)

#macro (pyrun_c script  in1 in2 out1 out2)
macro (pyrun_c script  in1 in2)
EXECUTE_PROCESS(COMMAND ${PYTHON} "${CMAKE_SOURCE_DIR}/tools/${script}" "${in1}" "${in2}")
                # OUTPUT_FILE ${out1}
				# OUTPUT_FILE ${out2})
endmacro(pyrun_c)

macro (client_gen typeof assert group filename maybe_reentrant)
# message(${typeof}) 
# message(${assert}) 
# message(${group}) 
# message(${filename}) 
# message(${maybe_reentrant})
EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools/glib-client-gen.py "--subclass=${typeof}" 
                "--subclass-assert=${assert}"
                "--group" "${group}"
                "--iface-quark-prefix=TP_IFACE_QUARK"
                "--tp-proxy-api=0.7.6"
				"${maybe_reentrant}"
                "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-spec-${filename}.xml"
                "Tp_Cli"
                "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-cli-${filename}")

endmacro(client_gen)


message("RUNNING xslt_to_pyrun")
xslt_to_pyrun(xincludator.py ${CMAKE_SOURCE_DIR}/telepathy-glib/stable-interfaces.xml 
							 ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-stamp 
							 ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml
			 )
message("DONE RUNNING xslt_to_pyrun")
			 
EXECUTE_PROCESS (COMMAND  ${PYTHON}  "${CMAKE_SOURCE_DIR}/tools/glib-gtypes-generator.py"
                                     "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml"
                                     "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/gtypes"
                                     "Tp"
                 )


EXECUTE_PROCESS(COMMAND ${PYTHON}  "${CMAKE_SOURCE_DIR}/tools/c-constants-gen.py" 
                                   "Tp" 
                                   "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml"  
                                   OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/telepathy-enums.h )


EXECUTE_PROCESS(COMMAND ${PYTHON}  "${CMAKE_SOURCE_DIR}/tools/glib-interfaces-gen.py"
                                   "Tp"
                                    "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/interfaces-body.h"
                                    "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/telepathy-interfaces.h"
                                    "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml"
                                    )


pyrun_b(glib-client-marshaller-gen.py ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml
                                       ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/register-dbus-glib-marshallers-body.h
                                      "_tp")
pyrun_a(glib-signals-marshal-gen.py  ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml
                                        ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-signals-marshal.list)


EXECUTE_PROCESS(COMMAND ${SORT_PROG} "-u" "${CMAKE_SOURCE_DIR}/telepathy-glib/signals-marshal.list"
                                     "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-signals-marshal.list"
                OUTPUT_FILE  ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/signals-marshal.list)


EXECUTE_PROCESS(COMMAND ${GGEN} "--header" "--prefix=_tp_marshal" "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/signals-marshal.list"
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/signals-marshal.h)


EXECUTE_PROCESS(COMMAND ${GGEN} "--body" "--prefix=_tp_marshal" "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/signals-marshal.list"
                OUTPUT_FILE ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/signals-marshal.c)
				
# generate _gen/error-str.h _gen/error-str.c:				
message("GENERATE error-str's")
message("${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/error-str")
pyrun_c(glib-errors-str-gen.py "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/error-str" 
							   "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/stable-spec.xml")
							   # ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/error-str.h 
							   # ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/error-str.c)
message("end GENERATE error-str's")

SET(XML_SRC 
   account.xml 
   account-manager.xml 
   channel.xml
   channel-dispatcher.xml
   channel-dispatch-operation.xml 
   channel-request.xml
   client.xml
   debug.xml
   connection-manager.xml
   connection.xml
   dbus-introspectable.xml
   dbus-peer.xml
   dbus-properties.xml
   generic.xml
   media-session-handler.xml
   media-stream-handler.xml
   stable-interfaces.xml
   dbus-daemon.xml
   )

foreach(X ${XML_SRC})
	message(${X})
	xslt_to_pyrun(xincludator.py ${CMAKE_SOURCE_DIR}/telepathy-glib/${X} 
							 ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/spec-stamp 
							 ${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-spec-${X}
			 )
	pyrun_glib_ginterface_gen( ${X}
					"${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/spec-stamp"
					)

endforeach(X)

client_gen("TpChannel" "TP_IS_CHANNEL" "channel" "channel" "--generate-reentrant")
client_gen("TpConnection" "TP_IS_CONNECTION" "connection" "connection" "--generate-reentrant")
client_gen("TpConnectionManager" "TP_IS_CONNECTION_MANAGER" "connection_manager" "connection-manager" "--generate-reentrant")
client_gen("TpDBusDaemon" "TP_IS_DBUS_DAEMON" "dbus_daemon" "dbus-daemon" "--generate-reentrant")
client_gen("TpMediaSessionHandler" "TP_IS_MEDIA_SESSION_HANDLER" "media_session_handler" "media-session-handler" "--generate-reentrant")
client_gen("TpMediaStreamHandler" "TP_IS_MEDIA_STREAM_HANDLER" "media_stream_handler" "media-stream-handler" "--generate-reentrant")


client_gen("TpAccount" "TP_IS_ACCOUNT" "account" "account" "")
client_gen("TpAccountManager" "TP_IS_ACCOUNT_MANAGER" "account_manager" "account-manager" "")
client_gen("TpChannelDispatcher" "TP_IS_CHANNEL_DISPATCHER" "channel_dispatcher" "channel-dispatcher" "")
client_gen("TpChannelDispatchOperation" "TP_IS_CHANNEL_DISPATCH_OPERATION" "channel_dispatch_operation" "channel-dispatch-operation" "")
client_gen("TpChannelRequest" "TP_IS_CHANNEL_REQUEST" "channel_request" "channel-request" "")
client_gen("TpClient" "TP_IS_CLIENT" "client" "client" "")



#handle this special case : generic
EXECUTE_PROCESS(COMMAND ${PYTHON} ${CMAKE_SOURCE_DIR}/tools/glib-client-gen.py
                "--group" "generic"
                "--iface-quark-prefix=TP_IFACE_QUARK"
                "--tp-proxy-api=0.7.6"
				"--generate-reentrant"
                "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-spec-generic.xml"
                "Tp_Cli"
                "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/tp-cli-generic")

            
# Define projects
# ================
add_subdirectory(telepathy-glib)


