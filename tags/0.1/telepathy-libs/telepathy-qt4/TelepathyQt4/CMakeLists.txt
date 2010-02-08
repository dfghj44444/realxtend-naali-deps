include_directories(${CMAKE_SOURCE_DIR}
                    ${CMAKE_BINARY_DIR}
                    ${QT_INCLUDES})

file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/_gen")

set(telepathy_qt4_SRCS
    abstract-client.cpp
    abstract-interface.cpp
    account-manager.cpp
    account.cpp
    channel-dispatch-operation.cpp
    channel-dispatcher.cpp
    channel-factory.cpp
    channel-request.cpp
    channel.cpp
    client-registrar.cpp
    client.cpp
    connection-manager.cpp
    connection.cpp
    contact-manager.cpp
    contact.cpp
    dbus-proxy.cpp
    dbus.cpp
    debug.cpp
    feature.cpp
    file-transfer-channel.cpp
    key-file.cpp
    manager-file.cpp
    media-session-handler.cpp
    media-stream-handler.cpp
    message.cpp
    optional-interface-factory.cpp
    pending-account.cpp
    pending-channel-request.cpp
    pending-channel.cpp
    pending-connection.cpp
    pending-contact-attributes.cpp
    pending-contacts.cpp
    pending-handles.cpp
    pending-operation.cpp
    pending-ready.cpp
    pending-string-list.cpp
    properties.cpp
    readiness-helper.cpp
    ready-object.cpp
    referenced-handles.cpp
    room-list-channel.cpp
    streamed-media-channel.cpp
    text-channel.cpp
    types.cpp)
   
#ls --ignore="*.cpp" --ignore="*.xml" --ignore="*.in" --ignore="*.dox" --ignore="*.cmake" --ignore="*.txt" *h    
set(telepathy_qt4_HEADERS 
    AbstractClient 
    PendingOperation 
    AbstractClientApprover 
    PendingReady 
    AbstractClientHandler 
    PendingStringList 
    AbstractClientObserver 
    PendingSuccess 
    AbstractInterface 
    PendingVoidMethodCall 
    Account 
    Properties 
    AccountInterface 
    PropertiesInterface 
    AccountManager 
    PropertiesInterfaceInterface 
    AccountManagerInterface 
    ReadinessHelper 
    Channel 
    ReadyObject 
    ChannelDispatchOperation 
    ReceivedMessage 
    ChannelDispatchOperationInterface 
    RefCounted 
    ChannelDispatcher 
    ReferencedHandles 
    ChannelDispatcherInterface 
    ReferencedHandlesIterator 
    ChannelInterface 
    RoomListChannel 
    ChannelInterfaceCallStateInterface 
    SharedPtr 
    ChannelInterfaceChatStateInterface 
    StatefulDBusProxy 
    ChannelInterfaceDTMFInterface 
    StatelessDBusProxy 
    ChannelInterfaceGroupInterface 
    StreamedMediaChannel 
    ChannelInterfaceHoldInterface 
    TextChannel 
    ChannelInterfaceMediaSignallingInterface 
    Types 
    ChannelInterfacePasswordInterface 
    WeakPtr 
    ChannelRequest 
    abstract-client.h 
    ChannelRequestInterface 
    abstract-interface.h 
    ChannelTypeContactListInterface 
    account-manager.h 
    ChannelTypeRoomListInterface 
    account.h 
    ChannelTypeStreamedMediaInterface 
    channel-dispatch-operation.h 
    ChannelTypeTextInterface 
    channel-dispatcher.h 
    ChannelTypeTubesInterface 
    channel-factory.h 
    Client 
    channel-request.h 
    ClientApproverInterface 
    channel.h 
    ClientHandlerInterface 
    client-registrar-internal.h 
    ClientInterface 
    client-registrar.h 
    ClientInterfaceRequestsInterface 
    client.h 
    ClientObserverInterface 
    connection-internal.h 
    ClientRegistrar 
    connection-manager-internal.h 
    Connection 
    connection-manager.h 
    ConnectionInterface 
    connection.h 
    ConnectionInterfaceAliasingInterface 
    constants.h 
    ConnectionInterfaceAvatarsInterface 
    contact-manager-internal.h 
    ConnectionInterfaceCapabilitiesInterface 
    contact-manager.h 
    ConnectionInterfaceContactsInterface 
    contact.h 
    ConnectionInterfacePresenceInterface 
    dbus-proxy.h 
    ConnectionInterfaceRequestsInterface 
    dbus.h 
    ConnectionInterfaceSimplePresenceInterface 
    debug-internal.h 
    ConnectionManager 
    debug.h 
    ConnectionManagerInterface 
    feature.h 
    Constants 
    file-transfer-channel.h 
    Contact 
    key-file.h 
    ContactManager 
    manager-file.h 
    DBus 
    media-session-handler.h 
    DBusDaemonInterface 
    media-stream-handler.h 
    DBusProxy 
    message.h 
    Debug 
    method-invocation-context.h 
    Farsight 
    optional-interface-factory.h 
    Feature 
    pending-account.h 
    FileTransferChannel 
    pending-channel-request-internal.h 
    IntrospectableInterface 
    pending-channel-request.h 
    KeyFile 
    pending-channel.h 
    pending-connection.h 
    ManagerFile 
    pending-contact-attributes.h 
    MediaSessionHandler 
    pending-contacts.h 
    MediaSessionHandlerInterface 
    pending-handles.h 
    MediaStreamHandler 
    pending-operation.h 
    MediaStreamHandlerInterface 
    pending-ready.h 
    Message 
    pending-string-list.h 
    MethodInvocationContext 
    properties.h 
    OptionalInterfaceFactory 
    readiness-helper.h 
    PeerInterface 
    ready-object.h 
    PendingAccount 
    referenced-handles.h 
    PendingChannel 
    room-list-channel.h 
    PendingChannelRequest 
    shared-ptr.h 
    PendingConnection 
    simple-pending-operations.h 
    PendingContactAttributes 
    streamed-media-channel.h 
    PendingContacts 
    text-channel.h 
    PendingFailure 
    types.h 
    PendingHandles)

#see nodist_geninclude_HEADERS from Makefile.am
set(telepathy_qt4_gen_HEADERS
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-account.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-account-manager.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-channel.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-channel-dispatcher.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-channel-dispatch-operation.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-channel-request.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-client.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-connection.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-connection-manager.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-dbus.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-media-session-handler.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-media-stream-handler.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-properties.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/constants.h
    ${CMAKE_CURRENT_BINARY_DIR}/_gen/types.h)

    
#grep -R Q_OBJECT TelepathyQt4/ | sort -u
set(telepathy_qt4_MOC_SRCS
    abstract-interface.h
    account-manager.h
    account.h
    channel-dispatch-operation.h
    channel-request.h
    channel.h
    client-registrar-internal.h
    client-registrar.h
    connection-internal.h
    connection-manager-internal.h
    connection-manager.h
    connection.h
    contact-manager-internal.h
    contact-manager.h
    contact.h
    dbus-proxy.h
    file-transfer-channel.h
    pending-account.h
    pending-channel-request-internal.h
    pending-channel-request.h
    pending-channel.h
    pending-connection.h
    pending-contact-attributes.h
    pending-contacts.h
    pending-handles.h
    pending-operation.h
    pending-ready.h
    pending-string-list.h
    readiness-helper.h
    room-list-channel.h
    simple-pending-operations.h
    streamed-media-channel.h
    text-channel.h)

message("************")
message("${CMAKE_CURRENT_BINARY_DIR}")
message("${PYTHON_EXECUTABLE}")
message("${CMAKE_SOURCE_DIR}")

# For some reason can't get add_custom_command working -> changing to EXECUTE_PROCESS
set(gen_stable_spec_xml ${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml)

# add_custom_command(OUTPUT ${gen_stable_spec_xml}
    # COMMAND ${PYTHON_EXECUTABLE}
    # ARGS ${CMAKE_SOURCE_DIR}/tools/xincludator.py
         # ${CMAKE_CURRENT_SOURCE_DIR}/stable-interfaces.xml
         # > ${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml
    # DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/stable-interfaces.xml
            # ${CMAKE_SOURCE_DIR}/tools/xincludator.py)

EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tools/xincludator.py
        "${CMAKE_CURRENT_SOURCE_DIR}/stable-interfaces.xml" 
        OUTPUT_FILE "${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml")
            
message("************")
# add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/_gen/constants.h
    # COMMAND ${PYTHON_EXECUTABLE}
    # ARGS ${CMAKE_SOURCE_DIR}/tools/qt4-constants-gen.py
         # --namespace=Tp
         # --str-constant-prefix=TELEPATHY_
         # --must-define=IN_TELEPATHY_QT4_HEADER
         # --specxml=${gen_stable_spec_xml}
         # > ${CMAKE_CURRENT_BINARY_DIR}/_gen/constants.h
    # DEPENDS ${gen_stable_spec_xml}
            # ${CMAKE_SOURCE_DIR}/tools/qt4-constants-gen.py)

EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tools/qt4-constants-gen.py
        "--namespace=Tp"
        "--str-constant-prefix=TELEPATHY_"
        "--must-define=IN_TELEPATHY_QT4_HEADER"
        "--specxml=${gen_stable_spec_xml}"
        OUTPUT_FILE "${CMAKE_CURRENT_BINARY_DIR}/_gen/constants.h")
message("************")
# add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/_gen/types.h ${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp
    # COMMAND ${PYTHON_EXECUTABLE}
    # ARGS ${CMAKE_SOURCE_DIR}/tools/qt4-types-gen.py
         # --namespace=Tp
         # --declfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/types.h
         # --implfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp
         # --realinclude=TelepathyQt4/types.h
         # --prettyinclude=TelepathyQt4/Types
         # --must-define=IN_TELEPATHY_QT4_HEADER
         # --specxml=${gen_stable_spec_xml}
    # DEPENDS ${gen_stable_spec_xml}
            # ${CMAKE_SOURCE_DIR}/tools/qt4-types-gen.py
            # ${CMAKE_CURRENT_BINARY_DIR}/_gen/constants.h)
            
EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tools/qt4-types-gen.py
        "--namespace=Tp"
        "--declfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/types.h"
        "--implfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp"
        "--realinclude=TelepathyQt4/types.h"
        "--prettyinclude=TelepathyQt4/Types"
        "--must-define=IN_TELEPATHY_QT4_HEADER"
        "--specxml=${gen_stable_spec_xml}")
        #should output 2 files: ${CMAKE_CURRENT_BINARY_DIR}/_gen/types.h AND ${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp
message("************")
            
list(APPEND telepathy_qt4_SRCS ${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp)
set_source_files_properties(${CMAKE_CURRENT_BINARY_DIR}/_gen/types-body.hpp PROPERTIES GENERATED true)

# set(SPECS
    # account
    # account-manager
    # channel
    # connection
    # connection-manager
    # dbus
    # media-session-handler
    # media-stream-handler
    # properties)

set(SPECS
    account
    account-manager
    channel
    channel-dispatcher
    channel-dispatch-operation
    channel-request
    client
    connection
    connection-manager
    dbus
    dbus-daemon
    dbus-introspectable
    dbus-peer
    dbus-properties
    media-session-handler
    media-stream-handler
    properties)

    
foreach(spec ${SPECS})
    message("produsing: ${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml")
    # add_custom_command(OUTPUT "_gen/spec-${spec}.xml"
        # COMMAND ${PYTHON_EXECUTABLE}
        # ARGS ${CMAKE_SOURCE_DIR}/tools/xincludator.py
             # ${CMAKE_CURRENT_SOURCE_DIR}/${spec}.xml
             # > ${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml
        # DEPENDS ${spec}.xml
                # ${CMAKE_SOURCE_DIR}/tools/xincludator.py)
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tools/xincludator.py
        "${CMAKE_CURRENT_SOURCE_DIR}/${spec}.xml"
        OUTPUT_FILE "${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml")
    set(NEW_FILES
        ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}-body.hpp
        ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.moc.hpp)
    list(APPEND telepathy_qt4_SRCS ${NEW_FILES})
    set_source_files_properties(${NEW_FILES} PROPERTIES GENERATED true)
endforeach(spec ${SPECS})

# if(MSVC)
    # set(TYPES_INCLUDE ^<TelepathyQt4/Types^> )
# else(MSVC)
    # set(TYPES_INCLUDE '<TelepathyQt4/Types>' )
# endif(MSVC)
set(TYPES_INCLUDE <TelepathyQt4/Types> )

function(CLIENT_GENERATOR spec group pretty_include namespace main_iface)
    # set(ARGS
        # ${CMAKE_SOURCE_DIR}/tools/qt4-client-gen.py
            # --group=${group}
            # --namespace=${namespace}
            # --typesnamespace=Tp
            # --headerfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.h
            # --implfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}-body.hpp
            # --realinclude=TelepathyQt4/${spec}.h
            # --prettyinclude=TelepathyQt4/${pretty_include}
            # --specxml=${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml
            # --ifacexml=${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml
            # --extraincludes=${TYPES_INCLUDE}
            # --must-define=IN_TELEPATHY_QT4_HEADER
            # ${main_iface})
    # add_custom_command(OUTPUT _gen/cli-${spec}.h _gen/cli-${spec}-body.hpp
        # COMMAND ${PYTHON_EXECUTABLE}
        # ARGS ${ARGS}
        # DEPENDS ${CMAKE_SOURCE_DIR}/tools/qt4-client-gen.py
                # ${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml
                # ${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml
        # WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
    EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tools/qt4-client-gen.py
            "--group=${group}"
            "--namespace=${namespace}"
            "--typesnamespace=Tp"
            "--headerfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.h"
            "--implfile=${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}-body.hpp"
            "--realinclude=TelepathyQt4/${spec}.h"
            "--prettyinclude=TelepathyQt4/${pretty_include}"
            "--specxml=${CMAKE_CURRENT_BINARY_DIR}/_gen/stable-spec.xml"
            "--ifacexml=${CMAKE_CURRENT_BINARY_DIR}/_gen/spec-${spec}.xml"
            "--extraincludes=${TYPES_INCLUDE}"
            "--must-define=IN_TELEPATHY_QT4_HEADER"
            "${main_iface}")
            # should create _gen/cli-${spec}.h and _gen/cli-${spec}-body.hpp files

    qt4_generate_moc_i(${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.h
                       ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.moc.hpp)

    list(APPEND telepathy_qt4_SRCS ${CMAKE_CURRENT_BINARY_DIR}/_gen/cli-${spec}.moc.hpp)
endfunction(CLIENT_GENERATOR spec group pretty_include main_iface)

client_generator(channel clientchannel Channel Tp::Client --mainiface=Tp::Client::ChannelInterface)
client_generator(account clientaccount AccountManager Tp::Client --mainiface=Tp::Client::AccountInterface)
client_generator(account-manager clientam AccountManager Tp::Client --mainiface=Tp::Client::AccountManagerInterface)
client_generator(connection clientconn Connection Tp::Client --mainiface=Tp::Client::ConnectionInterface)
client_generator(connection-manager clientcm ConnectionManager Tp::Client --mainiface=Tp::Client::ConnectionManagerInterface)
client_generator(dbus clientdbus DBus Tp::Client::DBus "")
client_generator(media-session-handler clientmsesh MediaSessionHandler Tp::Client --mainiface=Tp::Client::MediaSessionHandlerInterface)
client_generator(media-stream-handler clientmstrh MediaStreamHandler Tp::Client --mainiface=Tp::Client::MediaStreamHandlerInterface)
client_generator(properties clientprops Properties Tp::Client "")

client_generator(channel-dispatcher clientchanneldispatcher ChannelDispatcher Tp::Client --mainiface=Tp::Client::ChannelDispatcherInterface)
client_generator(channel-dispatch-operation clientchanneldispatchoperation ChannelDispatchOperation Tp::Client --mainiface=Tp::Client::ChannelDispatchOperationInterface)
client_generator(channel-request clientchannelrequest ChannelRequest Tp::Client --mainiface=Tp::Client::ChannelRequestInterface)
client_generator(client clientclient Client Tp::Client --mainiface=Tp::Client::ClientInterface)

#client_generator(dbus-daemon
#client_generator(dbus-introspectable
#client_generator(dbus-peer
#client_generator(dbus-properties



# generate client moc files
foreach(moc_src ${telepathy_qt4_MOC_SRCS})
    set(generated_file _gen/${moc_src})
    string(REPLACE ".h" ".moc.hpp" generated_file ${generated_file})
    qt4_generate_moc_i(${CMAKE_CURRENT_SOURCE_DIR}/${moc_src} ${CMAKE_CURRENT_BINARY_DIR}/${generated_file})
    list(APPEND telepathy_qt4_SRCS ${CMAKE_CURRENT_BINARY_DIR}/${generated_file})
endforeach(moc_src ${telepathy_qt4_MOC_SRCS})

add_library(telepathy-qt4 STATIC ${telepathy_qt4_SRCS})
target_link_libraries(telepathy-qt4
    ${QT_QTDBUS_LIBRARY}
    ${QT_QTCORE_LIBRARY})
# message("telepathy_qt4_headers")
# message(${telepathy_qt4_HEADERS})    
# message(${include_install_dir}/telepathy-1.0/telepathyqt4)    
# install(FILES ${telepathy_qt4_HEADERS} DESTINATION ${include_install_dir}/telepathy-1.0/telepathyqt4)
# install(files ${telepathy_qt4_gen_headers} destination ${include_install_dir}/telepathy-1.0/telepathyqt4/_gen)
# install(targets telepathy-qt4 destination ${lib_install_dir})

# pkg-config file
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/TelepathyQt4.pc.in ${CMAKE_CURRENT_BINARY_DIR}/TelepathyQt4.pc)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/TelepathyQt4.pc DESTINATION ${LIB_INSTALL_DIR}/pkgconfig)

