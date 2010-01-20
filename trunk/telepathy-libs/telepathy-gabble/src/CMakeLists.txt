include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(gabble-win32_SRCS 
base64.c
bytestream-factory.c
bytestream-ibb.c
bytestream-iface.c
bytestream-muc.c
bytestream-multiple.c
bytestream-socks5.c
capabilities.c
caps-channel-manager.c
caps-hash.c
conn-aliasing.c
conn-avatars.c
connection.c
connection-manager.c
conn-olpc.c
conn-presence.c
debug.c
disco.c
error.c
gabble.c
im-channel.c
im-factory.c
jingle-content.c
jingle-factory.c
jingle-media-rtp.c
jingle-session.c
jingle-transport-google.c
jingle-transport-iface.c
main.c
media-channel.c
media-factory.c
media-stream.c
muc-channel.c
muc-factory.c
olpc-activity.c
olpc-activity-view.c
olpc-buddy-view.c
olpc-gadget-manager.c
olpc-view.c
presence.c
presence-cache.c
private-tubes-factory.c
pubsub.c
register.c
request-pipeline.c
roomlist-channel.c
roomlist-manager.c
roster.c
roster-channel.c
tube-dbus.c
tube-iface.c
tubes-channel.c
tube-stream.c
util.c
vcard-manager.c
${CMAKE_SOURCE_DIR}/extensions/_gen/signals-marshal.c
${CMAKE_SOURCE_DIR}/extensions/_gen/svc.c
${CMAKE_SOURCE_DIR}/extensions/extensions.c
${CMAKE_SOURCE_DIR}/src/gabble-signals-marshal.c
conn-location.c
debugger.c
ft-channel.c
ft-manager.c
jingle-transport-rawudp.c
jingle-transport-iceudp.c
media-channel-hold.c
message-util.c
)

set (write_mgr_fil_src write-mgr-file.c)

# Define link dirs
# ================
link_directories(${GLIB_LIB_DIRS} ${DBUS_LIB_DIRS} ${DBUS_GLIB_LIB_DIRS} ${EXPAT_LIB_DIRS} ${LOUDMOUTH_LIB_DIRS} 
                ${TELEPATHY_GLIB_LIB_DIRS}
                ${LIBSOUP_LIB_DIRS})

#link_directories(${GLIB_LIB_PREFIX} ${SOUP_LIBRARY_DIRS} ${LOUDMOUTH_LIBRARY_DIRS} ${GLIB_LIBRARY_DIRS})

#message(${GLIB_INCLUDE_DIRS})

#add_executable(write-mgr-file ${write_mgr_fil_src})
add_executable(gabble-win32 ${gabble-win32_SRCS})

#target_link_libraries(write-mgr-file 
#                      ${GLIB_LIBRARIES}
#                      ${TELEPATHYGLIB_INCLUDE_DIRS}
#                      )


if(WIN32)
message("WIN32")
message(${WIN32})
message(${TELEPATHY_GLIB_LIBRARIES})
message(${TELEPATHY_GLIB_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/src ${GLIB_INCLUDE_DIRS} 
${LOUDMOUTH_INCLUDE_DIRS} ${LIBSOUP_INCLUDE_DIRS} ${TELEPATHY_GLIB_INCLUDE_DIRS} ${DBUS_GLIB_INCLUDE_DIRS} ${DBUS_INCLUDE_DIRS})

# target_link_libraries(gabble-win32
                      # gibber
		      # intl
		      # ws2_32.lib
		      # Dnsapi.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/glib-2.0.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/gio-2.0.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/gmodule-2.0.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/gobject-2.0.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/dbus-glib.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/dbus-1.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/telepathy-glib.lib
		      # ${CMAKE_INSTALL_PREFIX}/lib/loudmouth.lib
		      # ${SSL_PREFIX}/libeay32.lib
		      # ${SSL_PREFIX}/ssleay32.lib
                      # ${SOUP_LIBRARIES}
                      # ${LOUDMOUTH_LIBRARIES}
                      # ${GLIB_LIBRARIES}
                      # ${TELEPATHYGLIB_LIBRARIES})


target_link_libraries(gabble-win32
                      gibber
                      intl
                      ws2_32.lib
                      Dnsapi.lib
                      ${SOUP_LIBRARIES}
                      ${LOUDMOUTH_LIBRARIES}
                      ${GLIB_LIBRARIES}
                      ${TELEPATHY_GLIB_LIBRARIES}
                      ${DBUS_LIBRARIES}
                      ${DBUS_GLIB_LIBRARIES}
                      ${LIBSOUP_LIBRARIES})
                      
ENDIF(WIN32)

if(UNIX)
target_link_libraries(gabble-win32
                      gibber
                      ${SOUP_LIBRARIES}
                      ${LOUDMOUTH_LIBRARIES}
                      ${GLIB_LIBRARIES}
                      ${TELEPATHYGLIB_LIBRARIES})
ENDIF(UNIX)


INSTALL(TARGETS gabble-win32 DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/)
