


set(BUILT_SOURCES 
    tf-signals-marshal.h 
    tf-signals-marshal.c)


set(libtelepathy_farsight_la_SOURCES 
	stream.c
	stream.h
	session.c
	channel.c
	channel.h
	stream-priv.h
	session-priv.h
	channel-priv.h
    ../telepathy-farsight.def)

set(tf_sources ${BUILT_SOURCES} ${libtelepathy_farsight_la_SOURCES})

message("GSTREAMER PATHS & LIBS")
message(${GSTREAMER_INCLUDE_DIRS})
message(${GSTREAMER_LIB_DIRS})
message(${GSTREAMER_LIBRARIES})


include_directories(${CMAKE_SOURCE_DIR}/telepathy-farsight ${GLIB_INCLUDE_DIRS} 
                    ${TELEPATHY_GLIB_INCLUDE_DIRS} ${DBUS_GLIB_INCLUDE_DIRS} ${DBUS_INCLUDE_DIRS} ${GSTREAMER_INCLUDE_DIRS} )


link_directories(${GLIB_LIB_DIRS} ${DBUS_LIB_DIRS} ${DBUS_GLIB_LIB_DIRS} 
                ${TELEPATHY_GLIB_LIB_DIRS} ${GSTREAMER_LIB_DIRS})

    
add_library(telepathy-farsight SHARED ${tf_sources})


target_link_libraries(telepathy-farsight ${GLIB_LIBRARIES}
                      ${TELEPATHY_GLIB_LIBRARIES}
                      ${DBUS_LIBRARIES}
                      ${DBUS_GLIB_LIBRARIES}
                      ${GSTREAMER_LIBRARIES})
