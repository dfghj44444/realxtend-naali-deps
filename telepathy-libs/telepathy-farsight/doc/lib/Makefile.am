## Process this file with automake to produce Makefile.in

abs_top_builddir = @abs_top_builddir@

# We require automake 1.6 at least.
AUTOMAKE_OPTIONS = 1.6

# The name of the module, e.g. 'glib'.
DOC_MODULE=telepathy-farsight

# The top-level SGML file. You can change this if you want to.
DOC_MAIN_SGML_FILE=$(DOC_MODULE)-docs.sgml

# The directory containing the source code. Relative to $(srcdir).
# gtk-doc will search all .c & .h files beneath here for inline comments
# documenting the functions and macros.
# e.g. DOC_SOURCE_DIR=../../../gtk
DOC_SOURCE_DIR=../../telepathy-farsight

# Extra options to pass to gtkdoc-scangobj. Not normally needed.
SCANGOBJ_OPTIONS=

# Extra options to supply to gtkdoc-scan.
# e.g. SCAN_OPTIONS=--deprecated-guards="GTK_DISABLE_DEPRECATED"
SCAN_OPTIONS=

# Extra options to supply to gtkdoc-mkdb.
# e.g. MKDB_OPTIONS=--sgml-mode --output-format=xml
MKDB_OPTIONS=--sgml-mode --output-format=xml

# Extra options to supply to gtkdoc-mktmpl
# e.g. MKTMPL_OPTIONS=--only-section-tmpl
MKTMPL_OPTIONS=

# Extra options to supply to gtkdoc-fixref. Not normally needed.
# e.g. FIXXREF_OPTIONS=--extra-dir=../gdk-pixbuf/html --extra-dir=../gdk/html
FIXXREF_OPTIONS=

# Used for dependencies. The docs will be rebuilt if any of these change.
# e.g. HFILE_GLOB=$(top_srcdir)/gtk/*.h
# e.g. CFILE_GLOB=$(top_srcdir)/gtk/*.c
HFILE_GLOB=$(top_srcdir)/telepathy-farsight/channel.h $(top_srcdir)/telepathy-farsight/stream.h
CFILE_GLOB=$(top_srcdir)/telepathy-farsight/channel.c $(top_srcdir)/telepathy-farsight/stream.c

# Header files to ignore when scanning.
# e.g. IGNORE_HFILES=gtkdebug.h gtkintl.h
IGNORE_HFILES=session-priv.h *marshal.h

# Images to copy into HTML directory.
# e.g. HTML_IMAGES=$(top_srcdir)/gtk/stock-icons/stock_about_24.png
HTML_IMAGES=

# Extra SGML files that are included by $(DOC_MAIN_SGML_FILE).
# e.g. content_files=running.sgml building.sgml changes-2.0.sgml
content_files=

# SGML files where gtk-doc abbrevations (#GtkWidget) are expanded
# These files must be listed here *and* in content_files
# e.g. expand_content_files=running.sgml
expand_content_files=

# CFLAGS and LDFLAGS for compiling gtkdoc-scangobj with your library.
# Only needed if you are using gtkdoc-scangobj to dynamically query widget
# signals and properties.
# e.g. INCLUDES=-I$(top_srcdir) -I$(top_builddir) $(GTK_DEBUG_FLAGS)
# e.g. GTKDOC_LIBS=$(top_builddir)/gtk/$(gtktargetlib)
INCLUDES= \
	$(GLIB_CFLAGS) \
	$(DBUS_CFLAGS) \
	$(X11_CFLAGS) \
	$(GST_CFLAGS) \
	$(GST_INTERFACES_CFLAGS) \
	$(FARSIGHT2_CFLAGS) \
	$(TELEPATHY_CFLAGS) \
	-I$(top_srcdir) -I$(top_builddir)
GTKDOC_LIBS= \
	$(GLIB_LIBS) \
	$(DBUS_LIBS) \
	$(X11_LIBS) \
	$(GST_LIBS) \
	$(GST_INTERFACES_LIBS) \
	$(TELEPATHY_LIBS) \
	$(FARSIGHT2_LIBS) \
	$(top_builddir)/telepathy-farsight/libtelepathy-farsight.la

# This includes the standard gtk-doc make rules, copied by gtkdocize.
include $(top_srcdir)/gtk-doc.make

if ENABLE_GTK_DOC
check-local:
	@if grep '^0 symbols incomplete' \
		$(srcdir)/telepathy-farsight-undocumented.txt; then\
		:; else \
		cat $(srcdir)/telepathy-farsight-undocumented.txt; exit 1; fi
	@if grep '^0 not documented' \
		$(srcdir)/telepathy-farsight-undocumented.txt; then\
		:; else \
		cat $(srcdir)/telepathy-farsight-undocumented.txt; exit 1; fi
	@if grep . $(srcdir)/telepathy-farsight-unused.txt; then\
		echo "^^^ Unused symbols" >&2; exit 1; fi
	@if test -e $(srcdir)/telepathy-farsight-undeclared.txt &&\
		grep . $(srcdir)/telepathy-farsight-undeclared.txt; then\
		echo "^^^ Undeclared symbols" >&2; exit 1; fi
endif
