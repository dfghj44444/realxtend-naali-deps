# This directory is an example of how to build extensions to the spec.
# Typically this would be in a top-level extensions/ directory.
#
# In this example we build an extension for the TpConnection class,
# by using "--subclass=TpConnection --subclass-assert=TP_IS_CONNECTION".
# We could instead (or additionally) have made an extension for any other
# class, or by omitting those options entirely we could have made an extension
# that will work on TpProxy or any subclass of TpProxy.

tools_dir = $(top_srcdir)/tools

AM_CFLAGS = \
    $(ERROR_CFLAGS) \
    $(DBUS_CFLAGS) \
    $(GLIB_CFLAGS) \
    $(TP_GLIB_CFLAGS)

EXTRA_DIST = \
    all.xml \
    connection.xml \
    Connection_Interface_Hats.xml

noinst_LTLIBRARIES = libexample-extensions.la

# In an external project you'd use $(TP_GLIB_LIBS) (obtained from
# pkg-config via autoconf) instead of the .la path
libexample_extensions_la_LIBADD = \
    $(GLIB_LIBS) \
    $(DBUS_LIBS) \
    $(top_builddir)/telepathy-glib/libtelepathy-glib.la

# The client-specific parts are built into a separate .o file, so the linker
# can discard them when linking services. The service-specific parts are
# in svc-*.c, so we don't need an extensions-svc.c.
libexample_extensions_la_SOURCES = \
    extensions.c \
    extensions-cli.c \
    extensions.h

nodist_libexample_extensions_la_SOURCES = \
    _gen/signals-marshal.c \
    _gen/signals-marshal.h \
    _gen/signals-marshal.list \
    _gen/register-dbus-glib-marshallers-body.h \
    _gen/enums.h \
    _gen/gtypes.h \
    _gen/gtypes-body.h \
    _gen/interfaces.h \
    _gen/interfaces-body.h \
    _gen/cli-connection.h \
    _gen/cli-connection-body.h \
    _gen/svc-connection.h \
    _gen/svc-connection.c

BUILT_SOURCES = \
    _gen/all.xml \
    _gen/connection.xml \
    $(nodist_libexample_extensions_la_SOURCES) \
    extensions.html

CLEANFILES = $(BUILT_SOURCES)

XSLTPROCFLAGS = --nonet --novalid

# Generated files which can be generated for all categories simultaneously

_gen/all.xml: all.xml $(wildcard *.xml) $(tools_dir)/xincludator.py
	$(mkdir_p) _gen
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/xincludator.py $< > $@

extensions.html: _gen/all.xml $(tools_dir)/doc-generator.xsl
	$(AM_V_GEN)$(XSLTPROC) $(XSLTPROCFLAGS) \
		$(tools_dir)/doc-generator.xsl \
		$< > $@

_gen/gtypes.h _gen/gtypes-body.h: _gen/all.xml \
	$(top_srcdir)/tools/glib-gtypes-generator.py
	$(AM_V_GEN)$(PYTHON) $(top_srcdir)/tools/glib-gtypes-generator.py \
		$< _gen/gtypes Example

_gen/signals-marshal.list: _gen/all.xml \
	$(tools_dir)/glib-signals-marshal-gen.py
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/glib-signals-marshal-gen.py $< > $@

_gen/signals-marshal.h: _gen/signals-marshal.list Makefile.am
	$(AM_V_GEN)$(GLIB_GENMARSHAL) --header --prefix=_example_ext_marshal $< > $@

_gen/signals-marshal.c: _gen/signals-marshal.list Makefile.am
	$(AM_V_GEN){ echo '#include "_gen/signals-marshal.h"' && \
	$(GLIB_GENMARSHAL) --body --prefix=_example_ext_marshal $< ; } > $@

_gen/register-dbus-glib-marshallers-body.h: _gen/all.xml \
	$(tools_dir)/glib-client-marshaller-gen.py
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/glib-client-marshaller-gen.py $< \
		_example_ext > $@

_gen/enums.h: _gen/all.xml \
	$(tools_dir)/c-constants-gen.py
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/c-constants-gen.py \
		Example \
		$< > $@

_gen/interfaces-body.h _gen/interfaces.h: _gen/all.xml \
	$(tools_dir)/glib-interfaces-gen.py
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/glib-interfaces-gen.py \
		Example _gen/interfaces-body.h _gen/interfaces.h $<

# Generated files which must be generated per "category". Each TpProxy
# subclass you want to use with --subclass will need to have its own category,
# although you can subdivide further if you want.

_gen/connection.xml: connection.xml $(wildcard *.xml) $(tools_dir)/xincludator.py
	$(mkdir_p) _gen
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/xincludator.py $< > $@

_gen/cli-connection-body.h _gen/cli-connection.h: _gen/connection.xml \
	$(tools_dir)/glib-client-gen.py Makefile.am
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/glib-client-gen.py \
		--group=connection \
		--subclass=TpConnection \
		--subclass-assert=TP_IS_CONNECTION \
		--iface-quark-prefix=EXAMPLE_IFACE_QUARK \
		--tp-proxy-api=0.7.6 \
		--generate-reentrant \
		$< Example_Cli _gen/cli-connection

_gen/svc-connection.c _gen/svc-connection.h: _gen/connection.xml \
	$(tools_dir)/glib-ginterface-gen.py
	$(AM_V_GEN)$(PYTHON) $(tools_dir)/glib-ginterface-gen.py \
		--filename=_gen/svc-connection \
		--signal-marshal-prefix=_example_ext \
		--include='<telepathy-glib/dbus.h>' \
		--include='"_gen/signals-marshal.h"' \
		--not-implemented-func='tp_dbus_g_method_return_not_implemented' \
		--allow-unstable \
		$< Example_Svc_
