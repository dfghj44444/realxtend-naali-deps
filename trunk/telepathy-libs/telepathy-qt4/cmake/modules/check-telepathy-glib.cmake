IF(WIN32)

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

ENDIF(WIN32)