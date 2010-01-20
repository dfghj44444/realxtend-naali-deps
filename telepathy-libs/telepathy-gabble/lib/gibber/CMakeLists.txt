set(gibber_SRCS 
gibber-fd-transport.c
gibber-linklocal-transport.c
gibber-listener.c
gibber-signals-marshal.c
gibber-tcp-transport.c
gibber-transport.c
#gibber-unix-transport.c
gibber-util.c
gibber-debug.c
gibber-sockets.c
#asyncns.c
gibber-resolver.c
#${CMAKE_SOURCE_DIR}/lib/gibber/gibber-signals-marshal.c
)

link_directories(${GLIB_LIB_PREFIX} ${SOUP_LIBRARY_DIRS} ${LOUDMOUTH_LIBRARY_DIRS} ${GLIB_LIBRARY_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/src ${GLIB_INCLUDE_DIRS} ${LOUDMOUTH_INCLUDE_DIRS} ${SOUP_INCLUDE_DIRS} ${TELEPATHYGLIB_INCLUDE_DIRS} ${WIN32_STRUCTS_DIR} )


add_library(gibber ${gibber_SRCS})

target_link_libraries(gibber
                     resolv
                      ${SOUP_LIBRARIES}
                      ${LOUDMOUTH_LIBRARIES}
                      ${GLIB_LIBRARIES})
