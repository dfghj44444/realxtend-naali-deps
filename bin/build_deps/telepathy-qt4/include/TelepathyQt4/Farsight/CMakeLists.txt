# Just for building telepathy-qt4-farsight.lib in windows

project(libtelepathy-Qt4-farsight)

set(libtelepathy_qt4_farsight_la_SOURCES 
	channel.cpp
	channel.h
    libtelepathy-qt4-farsight.def)

    
#set(tf_sources ${BUILT_SOURCES} ${libtelepathy_farsight_la_SOURCES})

# link with TelepathyQt4 & telepathy-glib & Qt

include_directories(${CMAKE_SOURCE_DIR}
                    ${CMAKE_BINARY_DIR}
                    ${QT_INCLUDES}
                    ../../ 
                    ${TELEPATHY_FARSIGHT_INCLUDE_DIRS}
                    ${GLIB_INCLUDE_DIRS}
                    ${TELEPATHY_GLIB_INCLUDE_DIRS}
                    ${DBUS_GLIB_INCLUDE_DIRS}
                    ${DBUS_INCLUDE_DIRS}
                     ${GSTREAMER_INCLUDE_DIRS}
                    )


# include_directories(../../ 
                    # C:/CODE/RexNGDep2/trunk/telepathy-libs/telepathy-glib)
                    # ${TELEPATHY_GLIB_INCLUDE_DIRS} ${DBUS_GLIB_INCLUDE_DIRS} ${DBUS_INCLUDE_DIRS} ${GSTREAMER_INCLUDE_DIRS} )

# link_directories(${GLIB_LIB_DIRS} ${DBUS_LIB_DIRS} ${DBUS_GLIB_LIB_DIRS} 
                # ${TELEPATHY_GLIB_LIB_DIRS} ${GSTREAMER_LIB_DIRS})

    
add_library(telepathy-qt4-farsight STATIC ${libtelepathy_qt4_farsight_la_SOURCES})


# target_link_libraries(telepathy-farsight ${GLIB_LIBRARIES}
                      # ${TELEPATHY_GLIB_LIBRARIES}
                      # ${DBUS_LIBRARIES}
                      # ${DBUS_GLIB_LIBRARIES}
                      # ${GSTREAMER_LIBRARIES})
