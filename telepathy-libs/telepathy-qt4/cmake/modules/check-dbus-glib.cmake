
IF(WIN32)
    message("checking dbus-glib")
    #============================
    find_path(dbus_glib_include_found dbus-glib.h ${DBUS_GLIB_INCLUDE_DIR}/dbus)
    find_path(dbus_glib_lib_dir_found dbus-glib.lib ${DBUS_GLIB_LIB_DIR})
    
    if(dbus_glib_include_found AND dbus_glib_lib_dir_found)
        set(DBUS_GLIB_INCLUDE_DIRS ${DBUS_GLIB_INCLUDE_DIR})
        set(DBUS_GLIB_LIB_DIRS ${DBUS_GLIB_LIB_DIR})
        set(DBUS_GLIB_LIBRARIES dbus-glib.lib)
        message("dbus-glib configured")
        set(dbus_glib_found TRUE)
    else(dbus_glib_include_found AND dbus_glib_lib_dir_found)
        message(${dbus_glib_include_found})
        message(${dbus_glib_lib_dir_found})
        set(dbus_glib_found false)
        message(FATAL_ERROR "dbus-glib not found -> config fails")
    endif(dbus_glib_include_found AND dbus_glib_lib_dir_found)
ENDIF(WIN32)