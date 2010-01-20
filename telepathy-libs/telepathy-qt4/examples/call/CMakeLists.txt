if(TP_FARSIGHT_FOUND)
    include_directories(
                ${CMAKE_BINARY_DIR}
                ${CMAKE_SOURCE_DIR}
                ${QT_INCLUDES}
                ${TP_FARSIGHT_INCLUDE_DIRS}
                ${TELEPATHY_FARSIGHT_INCLUDE_DIRS}
                ${GLIB_INCLUDE_DIRS}
                ${TELEPATHY_GLIB_INCLUDE_DIRS}
                ${DBUS_GLIB_INCLUDE_DIRS}
                ${DBUS_INCLUDE_DIRS}
                ${GSTREAMER_INCLUDE_DIRS})

    set(call_SRCS
        main.cpp
        call-handler.cpp
        call-roster-widget.cpp
        call-widget.cpp
        call-window.cpp
        farsight-channel.cpp
        video-widget.cpp)

    set(call_MOC_SRCS
        call-handler.h
        call-roster-widget.h
        call-widget.h
        call-window.h
        farsight-channel.h
        video-widget.h)

    file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/_gen)
    foreach(moc_src ${call_MOC_SRCS})
        string(REPLACE ".h" ".moc.hpp" generated_file ${moc_src})
        qt4_generate_moc_i(${CMAKE_CURRENT_SOURCE_DIR}/${moc_src} ${CMAKE_CURRENT_BINARY_DIR}/_gen/${generated_file})
        list(APPEND call_SRCS ${CMAKE_CURRENT_BINARY_DIR}/_gen/${generated_file})
    endforeach(moc_src call_MOC_SRCS)

    link_directories(
        ${GSTREAMER_LIB_DIRS} 
        ${TELEPATHY_GLIB_LIB_DIRS}        
        ${GLIB_LIB_DIRS} 
        ${DBUS_LIB_DIRS} 
        ${DBUS_GLIB_LIB_DIRS} 
        ${TELEPATHY_FARSIGHT_LIB_DIRS} 
    )
    
    add_executable(call ${call_SRCS})
    target_link_libraries(call
        ${QT_QTCORE_LIBRARIES}
        ${QT_QTGUI_LIBRARIES}
        ${QT_QTCORE_LIBRARIES}
        ${TP_FARSIGHT_LIBRARIES}
        ${GSTREAMER_LIBRARIES}
        ${DBUS_LIBRARIES}
        ${DBUS_GLIB_LIBRARIES}
        ${GLIB_LIBRARIES}
        ${TELEPATHY_FARSIGHT_LIBRARIES}
        ${TELEPATHY_GLIB_LIBRARIES}
        telepathy-qt4
        telepathy-qt4-examples-roster
        telepathy-qt4-farsight)
endif(TP_FARSIGHT_FOUND)
