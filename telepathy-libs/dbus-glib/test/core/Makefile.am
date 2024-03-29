INCLUDES = \
	-I$(top_srcdir)				\
	-I$(top_srcdir)/dbus			\
	-I$(top_builddir)			\
	-I$(top_builddir)/dbus			\
	$(DBUS_CFLAGS)				\
	$(DBUS_GLIB_CFLAGS)			\
	-DDBUS_COMPILATION

## note that TESTS has special meaning (stuff to use in make check)
## so if adding tests not to be run in make check, don't add them to 
## TESTS
if DBUS_BUILD_TESTS
TESTS_ENVIRONMENT=DBUS_TOP_BUILDDIR=$(ABSOLUTE_TOP_BUILDDIR)
TESTS=run-test.sh run-peer-test.sh
else
TESTS=
endif

EXTRA_DIST=run-test.sh run-peer-test.sh test-service-glib.xml my-object-marshal.list test-service-glib-subclass.xml

if DBUS_BUILD_TESTS

if HAVE_GLIB_THREADS
THREAD_APPS=test-thread-server test-thread-client test-profile

test_thread_server_SOURCES=				\
	test-thread-server.c				\
	test-thread.h

test_thread_server_LDADD= $(DBUS_GLIB_THREADS_LIBS) $(top_builddir)/dbus/libdbus-glib-1.la 

test_thread_client_SOURCES=				\
	test-thread-client.c				\
	test-thread.h

test_thread_client_LDADD= $(DBUS_GLIB_THREADS_LIBS) $(top_builddir)/dbus/libdbus-glib-1.la 
endif

## we use noinst_PROGRAMS not check_PROGRAMS for TESTS so that we
## build even when not doing "make check"
noinst_PROGRAMS = \
	test-dbus-glib \
	test-service-glib \
	$(THREAD_APPS) \
	peer-server \
	peer-client \
	test-types \
	test-5688 \
	test-unregister \
	test-variant-recursion

test_5688_SOURCES = \
	my-object.c \
	my-object.h \
	my-object-subclass.c \
	my-object-subclass.h \
	my-object-marshal.c \
	5688.c
test_5688_LDADD = \
	$(top_builddir)/dbus/libdbus-glib-1.la \
	$(DBUS_GLIB_THREADS_LIBS)

test_unregister_SOURCES = \
	my-object.c \
	my-object.h \
	my-object-subclass.c \
	my-object-subclass.h \
	my-object-marshal.c \
	unregister.c
test_unregister_LDADD = \
	$(top_builddir)/dbus/libdbus-glib-1.la \
	$(DBUS_GLIB_THREADS_LIBS)

test_dbus_glib_SOURCES=				\
	my-object-marshal.c                             \
	test-dbus-glib.c

test_dbus_glib_LDADD= $(DBUS_GLIB_TOOL_LIBS) $(top_builddir)/dbus/libdbus-glib-1.la $(top_builddir)/dbus/libdbus-gtool.la

test_variant_recursion_SOURCES=test-variant-recursion.c

test_variant_recursion_LDADD= $(DBUS_GLIB_TOOL_LIBS) $(top_builddir)/dbus/libdbus-glib-1.la $(top_builddir)/dbus/libdbus-gtool.la

BUILT_SOURCES = test-service-glib-glue.h test-service-glib-subclass-glue.h test-service-glib-bindings.h my-object-marshal.c my-object-marshal.h 

test_service_glib_SOURCES=				\
	my-object.c                             \
	my-object.h                             \
	my-object-subclass.c                    \
	my-object-subclass.h                    \
	my-object-marshal.c                             \
	test-service-glib.c 
test_service_glib_LDADD= $(top_builddir)/dbus/libdbus-glib-1.la $(DBUS_GLIB_THREADS_LIBS) 

test-service-glib-glue.h: test-service-glib.xml $(top_builddir)/dbus/dbus-binding-tool
	$(DEBUG) $(DBUS_BINDING_TOOL) --prefix=my_object --mode=glib-server --output=test-service-glib-glue.h $(srcdir)/test-service-glib.xml

test-service-glib-subclass-glue.h: test-service-glib-subclass.xml $(top_builddir)/dbus/dbus-binding-tool
	$(DEBUG) $(DBUS_BINDING_TOOL) --prefix=my_object_subclass --mode=glib-server --output=test-service-glib-subclass-glue.h $(srcdir)/test-service-glib-subclass.xml

test-service-glib-bindings.h: test-service-glib.xml $(top_builddir)/dbus/dbus-binding-tool
	$(DEBUG) $(DBUS_BINDING_TOOL) --prefix=my_object --mode=glib-client --output=test-service-glib-bindings.h $(srcdir)/test-service-glib.xml

my-object-marshal.c: Makefile my-object-marshal.list
	@GLIB_GENMARSHAL@ --prefix=my_object_marshal $(srcdir)/my-object-marshal.list --header --body > my-object-marshal.c

my-object-marshal.h: Makefile my-object-marshal.list
	@GLIB_GENMARSHAL@ --prefix=my_object_marshal $(srcdir)/my-object-marshal.list --header > my-object-marshal.h


peer_server_SOURCES = \
	my-object.c                             \
	my-object.h                             \
	my-object-subclass.c                    \
	my-object-subclass.h                    \
	my-object-marshal.c                             \
	peer-server.c
peer_server_LDADD= $(top_builddir)/dbus/libdbus-glib-1.la $(DBUS_GLIB_THREADS_LIBS)

peer_client_SOURCES = \
	peer-client.c
peer_client_LDADD= $(top_builddir)/dbus/libdbus-glib-1.la $(DBUS_GLIB_THREADS_LIBS)

test_types_SOURCES = \
	test-types.c
test_types_LDADD= $(top_builddir)/dbus/libdbus-glib-1.la

CLEANFILES = \
	$(BUILT_SOURCES) \
	run-with-tmp-session-bus.conf

else
### not building tests

if HAVE_GLIB_THREADS
noinst_PROGRAMS=test-profile
endif

endif

if HAVE_GLIB_THREADS
test_profile_SOURCES=				\
	test-profile.c

test_profile_LDADD= $(DBUS_GLIB_THREADS_LIBS) $(top_builddir)/dbus/libdbus-glib-1.la 
endif
