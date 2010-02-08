# CMake file for building loudmouth for Windows
# =============================================
# /loudmouth/CMakeLists.txt


# Define the source files
# =======================
file(GLOB source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/*.c")
file(GLOB header_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/*.h")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-connection.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-error.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-message-node.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-message.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-socket.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-ssl-generic.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/._lm-ssl-openssl.c")
list(REMOVE_ITEM source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/asyncns.c")
list(APPEND source_files_for_loudmouth "${CMAKE_SOURCE_DIR}/loudmouth/libloudmouth.def")


# Define include dirs
# ===================
set(LOUDMOUTH_INCLUDE_DIR ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/loudmouth)
include_directories(${LOUDMOUTH_INCLUDE_DIR} ${GLIB_INCLUDE_DIRS} ${OPENSSL_INCLUDE_DIRS})

# Define link dirs #
# ================ #
link_directories(${GLIB_LIB_DIRS} ${OPENSSL_LIB_DIRS})

# Define the project
# ==================
add_library(loudmouth SHARED ${source_files_for_loudmouth} ${header_files_for_loudmouth})
set_target_properties(loudmouth PROPERTIES PROJECT_LABEL "Loudmouth")
set_target_properties(loudmouth PROPERTIES LIBRARY_OUTPUT_DIRECTORY "bin")
message("setting OPENSSL_LIBRARIES:")
message(${OPENSSL_LIBRARIES})
target_link_libraries(loudmouth ${GLIB_LIBRARIES} ${OPENSSL_LIBRARIES} WS2_32.Lib Dnsapi.lib)
add_definitions(-DLM_COMPILATION)