# Install script for directory: C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "C:/Program Files/telepathy-glib")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/Debug/telepathy-glib.lib")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/Release/telepathy-glib.lib")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/MinSizeRel/telepathy-glib.lib")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/RelWithDebInfo/telepathy-glib.lib")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE SHARED_LIBRARY FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/Debug/telepathy-glib.dll")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE SHARED_LIBRARY FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/Release/telepathy-glib.dll")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE SHARED_LIBRARY FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/MinSizeRel/telepathy-glib.dll")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "C:/Program Files/telepathy-glib/lib" TYPE SHARED_LIBRARY FILES "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/RelWithDebInfo/telepathy-glib.dll")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telepathy-glib" TYPE FILE FILES
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/account-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/account-manager-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/account-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/account.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/base-connection-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/base-connection.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-dispatch-operation.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-dispatcher.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-factory-iface.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-iface.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel-request.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/channel.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/client.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/connection-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/connection-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/connection.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/contact.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/contacts-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/dbus-daemon.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/dbus-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/dbus-properties-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/dbus.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/debug-ansi.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/debug-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/debug-sender.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/debug.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/defs.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/enums.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/errors.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/exportable-channel.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/extra-gtkdoc.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/group-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/gtypes.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/handle-repo-dynamic.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/handle-repo-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/handle-repo-static.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/handle-repo.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/handle.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/heap.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/interfaces.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/intset.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/media-interfaces.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/message-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/presence-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/properties-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/proxy-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/proxy-subclass.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/proxy.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/run.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-account-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-account.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-channel-dispatch-operation.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-channel-dispatcher.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-channel-request.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-channel.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-client.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-connection-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-connection.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-debug.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-generic.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-media-interfaces.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/svc-properties-interface.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/telepathy-glib.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/text-mixin.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/util-internal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/util.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/verify.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telepathy-glib/_gen" TYPE FILE FILES
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/error-str.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/gtypes-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/gtypes.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/interfaces-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/register-dbus-glib-marshallers-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/signals-marshal.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/telepathy-enums.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/telepathy-interfaces.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-account-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-account-manager-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-account-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-account.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-dispatch-operation-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-dispatch-operation.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-dispatcher-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-dispatcher.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-request-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel-request.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-channel.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-client-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-client.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-connection-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-connection-manager-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-connection-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-connection.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-dbus-daemon-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-dbus-daemon.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-generic-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-generic.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-media-session-handler-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-media-session-handler.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-media-stream-handler-body.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-cli-media-stream-handler.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-account-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-account.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-channel-dispatch-operation.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-channel-dispatcher.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-channel-request.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-channel.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-client.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-connection-manager.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-connection.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-dbus-introspectable.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-dbus-peer.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-dbus-properties.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-debug.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-generic.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-media-session-handler.h"
    "C:/CODE/collabora/telepathy-glib-0.9.2/telepathy-glib/_gen/tp-svc-media-stream-handler.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")

