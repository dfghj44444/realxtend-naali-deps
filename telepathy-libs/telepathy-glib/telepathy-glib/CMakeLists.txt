# CMake file for building telepathy-glib for Windows
# ==================================================
# /telepathy-glib/CMakeLists.txt

# Define the source files
# =======================
set(source_files_for_telepathy_glib 
    account.c
    account-manager.c
    base-connection.c
    base-connection-manager.c
    channel.c
    channel-group.c
    channel-internal.h
    channel-dispatcher.c
    channel-dispatch-operation.c
    channel-manager.c
    channel-request.c
    client.c
    connection.c
    connection-internal.h
    connection-handles.c
    connection-manager.c
    contact.c
    contacts-mixin.c
    dbus.c
    dbus-daemon.c
    dbus-internal.h
    dbus-properties-mixin.c
    debug.c
    debug-sender.c
    interfaces.c
    debug-internal.h
    errors.c
    exportable-channel.c
    group-mixin.c
    gtypes.c
    handle.c
    handle-repo.c
    handle-repo-dynamic.c
    handle-repo-internal.h
    handle-repo-static.c
    handle-set.c
    heap.c
    intset.c
    channel-iface.c
    channel-factory-iface.c
    media-interfaces.c
    message-mixin.c
    presence-mixin.c
    properties-mixin.c
    proxy.c
    proxy-internal.h
    proxy-methods.c
    proxy-signals.c
    run.c
    signals-marshal.list
    text-mixin.c
    util.c
    _gen/error-str.c
    _gen/signals-marshal.c
    _gen/signals-marshal.h
    _gen/signals-marshal.list
    _gen/tp-signals-marshal.list
    _gen/interfaces-body.h
    _gen/gtypes-body.h
    _gen/register-dbus-glib-marshallers-body.h
    _gen/tp-cli-account-body.h
    _gen/tp-cli-account-manager-body.h
    _gen/tp-cli-channel-body.h
    _gen/tp-cli-channel-dispatcher-body.h
    _gen/tp-cli-channel-dispatch-operation-body.h
    _gen/tp-cli-channel-request-body.h
    _gen/tp-cli-client-body.h
    _gen/tp-cli-connection-body.h
    _gen/tp-cli-connection-manager-body.h
    _gen/tp-cli-dbus-daemon-body.h
    _gen/tp-cli-generic-body.h
    _gen/tp-cli-media-session-handler-body.h
    _gen/tp-cli-media-stream-handler-body.h
    _gen/tp-svc-account.c
    _gen/tp-svc-account-manager.c
    _gen/tp-svc-channel.c
    _gen/tp-svc-channel-dispatcher.c
    _gen/tp-svc-channel-dispatch-operation.c
    _gen/tp-svc-channel-request.c
    _gen/tp-svc-client.c
    _gen/tp-svc-connection.c
    _gen/tp-svc-connection-manager.c
    _gen/tp-svc-debug.c
    _gen/tp-svc-generic.c
    _gen/tp-svc-media-session-handler.c
    _gen/tp-svc-media-stream-handler.c
    ../libtelepathy-glib.def
	)


   
file(GLOB header_files_for_telepathy_glib "${CMAKE_SOURCE_DIR}/telepathy-glib/*.h")
file(GLOB header_files_for_telepathy_glib_gen "${CMAKE_SOURCE_DIR}/telepathy-glib/_gen/*.h")


# Define include dirs
# ===================
set(TELEPATHY_GLIB_INCLUDE_DIR ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/telepathy-glib)
include_directories( ${CMAKE_SOURCE_DIR} 
   ${CMAKE_SOURCE_DIR}/telepathy-glib 
   ${GLIB_INCLUDE_DIRS} ${DBUS_INCLUDE_DIRS} ${DBUS_GLIB_INCLUDE_DIRS} ${EXPAT_INCLUDE_DIRS} ${LOUDMOUTH_INCLUDE_DIRS})

# Define link dirs
# ================
link_directories(${GLIB_LIB_DIRS} ${DBUS_LIB_DIRS} ${DBUS_GLIB_LIB_DIRS} ${EXPAT_LIB_DIRS} ${LOUDMOUTH_LIB_DIRS})

# Define the project
# ==================
add_library(telepathy-glib  ${LIB_TYPE}  ${source_files_for_telepathy_glib} ${header_files_for_telepathy_glib})
set_target_properties(telepathy-glib PROPERTIES PROJECT_LABEL "Telepathy-Glib")
target_link_libraries(telepathy-glib 
	${GLIB_PREFIX}/lib/glib-2.0.lib
	${GLIB_PREFIX}/lib/gobject-2.0.lib
	${GLIB_PREFIX}/lib/gmodule-2.0.lib
	${GLIB_PREFIX}/lib/gio-2.0.lib
    ${GLIB_PREFIX}/lib/intl.lib
    ${DBUS_LIBRARIES} 
    ${DBUS_GLIB_LIBRARIES} ${EXPAT_LIBRARIES} ${LOUDMOUTN_LIBRARIES})

add_definitions(-DVERSION=\"${VERSION}\")


set(location "lib")

if(${LIB_TYPE})
 set(location "bin")
ENDIF(${LIB_TYPE})

INSTALL(TARGETS telepathy-glib DESTINATION ${CMAKE_INSTALL_PREFIX}/${location}/)
install_files(/include/telepathy-glib/ FILES ${header_files_for_telepathy_glib})
install_files(/include/telepathy-glib/_gen/ FILES ${header_files_for_telepathy_glib_gen})


