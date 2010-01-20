# (c) 2008 by BogDan Vatra < bogdan@licentia.eu >

project(SizeProperty)

include_directories(BEFORE "${CMAKE_SOURCE_DIR}/lib" )

set(Size_SRCS size.cpp)
QT4_WRAP_CPP(Size_SRCS size.h)

add_library(SizeProperty SHARED ${Size_SRCS})
add_dependencies(SizeProperty PropertyEditor)
set_target_properties (SizeProperty PROPERTIES DEBUG_POSTFIX _d)
link_directories( "${CMAKE_BINARY_DIR}/lib" )
target_link_libraries(SizeProperty PropertyEditor ${QT_QTGUI_LIBRARY}
        ${QT_QTCORE_LIBRARY} )

install(TARGETS SizeProperty ${INSTALL_PLUGINS_DEFAULT_ARGS})
