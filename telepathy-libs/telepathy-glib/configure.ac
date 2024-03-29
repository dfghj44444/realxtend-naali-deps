AC_PREREQ([2.59])

# Making releases:
#   set the new version number:
#     odd minor -> development series
#     even minor -> stable series
#     increment micro for each release within a series
#   set nano_version to 0
#   make the release, tag it
#   set nano_version to 1

m4_define([tp_glib_major_version], [0])
m4_define([tp_glib_minor_version], [9])
m4_define([tp_glib_micro_version], [2])
m4_define([tp_glib_nano_version], [0])

# If library source has changed since last release, increment revision
# If interfaces have been added, removed or changed since last release,
#  increment current and set revision to 0
# If interfaces have been added since last release, increment age
# If interfaces have been removed since last release, set age to 0
#
# If interfaces have been added, release builds will fail unless you add a new
# file like telepathy-glib/versions/0.7.3.abi to add them to the official ABI.
# This also forces binaries built against devel versions to be rebuilt
# (we don't guarantee that we won't add ABI then remove it again, if it was
# never seen in a release).

m4_define([tp_glib_lt_current], [32])
m4_define([tp_glib_lt_revision], [0])
m4_define([tp_glib_lt_age], [32])

# Some magic
m4_define([tp_glib_base_version],
          [tp_glib_major_version.tp_glib_minor_version.tp_glib_micro_version])
m4_define([tp_glib_version],
          [m4_if(tp_glib_nano_version, 0, [tp_glib_base_version],
              [tp_glib_base_version].[tp_glib_nano_version])])

AC_INIT([Telepathy-GLib], [tp_glib_version],
        [https://bugs.freedesktop.org/enter_bug.cgi?product=Telepathy])

AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.9 -Wno-portability])
AM_CONFIG_HEADER(config.h)

m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES])

dnl check for tools
AC_PROG_CC
AC_PROG_CC_STDC
AC_PROG_INSTALL
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL
AM_PROG_MKDIR_P
# pkg-config 0.21 adds CFLAGS from Requires.private, which we need
PKG_PROG_PKG_CONFIG([0.21])

GTK_DOC_CHECK([1.10])

LT_CURRENT=tp_glib_lt_current
LT_REVISION=tp_glib_lt_revision
LT_AGE=tp_glib_lt_age
AC_SUBST([LT_CURRENT])
AC_SUBST([LT_REVISION])
AC_SUBST([LT_AGE])

dnl optimizations, etc.
COMPILER_OPTIMISATIONS
COMPILER_COVERAGE
LINKER_OPTIMISATIONS
LINKER_VERSION_SCRIPT

ifelse(tp_glib_nano_version, 0,
    [ official_release=yes ],
    [ official_release=no ])

TP_COMPILER_WARNINGS([ERROR_CFLAGS], [test "x$official_release" = xno],
  [all \
   extra \
   declaration-after-statement \
   shadow \
   strict-prototypes \
   missing-prototypes \
   sign-compare \
   nested-externs \
   pointer-arith \
   format-security \
   init-self],
  [missing-field-initializers \
   unused-parameter])
AC_SUBST([ERROR_CFLAGS])

AM_CONDITIONAL([OFFICIAL_RELEASE], [test "x$official_release" = xyes])

AC_ARG_ENABLE(debug,
  AC_HELP_STRING([--disable-debug],[compile without debug code (note that this will disable much of the debug code in all GLib connection managers)]),
    enable_debug=$enableval, enable_debug=yes )

AC_ARG_ENABLE(handle-leak-debug,
  AC_HELP_STRING([--enable-handle-leak-debug],[compile with handle leak debugging code (the CM should be built with -rdynamic)]),
    enable_handle_leak_debug=$enableval, enable_handle_leak_debug=no )

AC_ARG_ENABLE(backtrace,
  AC_HELP_STRING([--enable-backtrace],[enable printing out the backtrace in case of crash (in most GLib connection managers)]),
    enable_backtrace=$enableval, enable_backtrace=no )

ifelse(tp_glib_nano_version, 0,
    [ # tp-glib is version x.y.z - disable coding style checks by default
AC_ARG_ENABLE(coding-style-checks,
  AC_HELP_STRING([--enable-coding-style-checks],
                 [check coding style using grep]),
    [ENABLE_CODING_STYLE_CHECKS=$enableval], [ENABLE_CODING_STYLE_CHECKS=no] )
    ],
    [ # tp-glib is version x.y.z.1 - enable coding style checks by default
AC_ARG_ENABLE(coding-style-checks,
  AC_HELP_STRING([--disable-coding-style-checks],
                 [don't check coding style using grep]),
    [ENABLE_CODING_STYLE_CHECKS=$enableval], [ENABLE_CODING_STYLE_CHECKS=yes])
    ])

if test x$enable_debug = xyes; then
  AC_DEFINE(ENABLE_DEBUG, [], [Enable debug code])
fi

if test x$enable_handle_leak_debug = xyes; then
  AC_DEFINE(ENABLE_HANDLE_LEAK_DEBUG, [], [Enable handle leak debug code])
  HANDLE_LEAK_DEBUG_CFLAGS="-rdynamic"
fi

if test x$enable_backtrace = xyes; then
  AC_DEFINE(ENABLE_BACKTRACE, [], [Enable backtrace output on crashes])
fi

AC_SUBST(HANDLE_LEAK_DEBUG_CFLAGS)
AC_SUBST(COVERAGE_CFLAGS)

AC_ARG_ENABLE([installed-examples],
  AC_HELP_STRING([--enable-installed-examples],
    [install examples as well as the library]),
    [enable_installed_examples="$enableval"],
    [enable_installed_examples=no])
AM_CONDITIONAL([INSTALL_EXAMPLES], [test "$enable_installed_examples" = yes])

AC_SUBST([ENABLE_CODING_STYLE_CHECKS])

dnl docs/Makefile.am needs to know whether it's an out of tree build
dnl (srcdir != builddir)
AM_CONDITIONAL([OUT_OF_TREE_BUILD], [test "z$ac_srcdir" != z.])

dnl Check for Glib
PKG_CHECK_MODULES(GLIB,
  [glib-2.0 >= 2.20, gobject-2.0 >= 2.20, gio-2.0 >= 2.20])
AC_SUBST(GLIB_CFLAGS)
AC_SUBST(GLIB_LIBS)

GLIB_GENMARSHAL=`$PKG_CONFIG --variable=glib_genmarshal glib-2.0`
AC_SUBST(GLIB_GENMARSHAL)

dnl Check for D-Bus
PKG_CHECK_MODULES(DBUS, [dbus-1 >= 0.95, dbus-glib-1 >= 0.82])

AC_SUBST(DBUS_CFLAGS)
AC_SUBST(DBUS_LIBS)

dnl We want the examples to be able to use TP_GLIB_CFLAGS as though they were
dnl independent programs, but subst'ing TP_GLIB_LIBS interferes with
dnl dependency tracking
TP_GLIB_CFLAGS='-I${top_builddir} -I${top_srcdir}'
AC_SUBST(TP_GLIB_CFLAGS)

dnl Check for code generation tools
XSLTPROC=
AC_CHECK_PROGS([XSLTPROC], [xsltproc])
if test -z "$XSLTPROC"; then
  AC_MSG_ERROR([xsltproc (from the libxslt source package) is required])
fi
AM_PATH_PYTHON([2.5])

dnl glibc backtrace functions
AC_CHECK_FUNCS(backtrace backtrace_symbols_fd)
AC_CHECK_HEADERS(execinfo.h)

dnl signal functions
AC_CHECK_FUNCS(signal)
AC_CHECK_HEADERS(signal.h)

HAVE_LD_VERSION_SCRIPT=no
if test -n "$VERSION_SCRIPT_ARG"; then
	HAVE_LD_VERSION_SCRIPT=yes
fi
AC_CHECK_PROGS([NM], [nm])
if test -z "$NM"; then
	HAVE_LD_VERSION_SCRIPT=no
fi
AM_CONDITIONAL([HAVE_LD_VERSION_SCRIPT], [test $HAVE_LD_VERSION_SCRIPT = yes])

AC_OUTPUT( Makefile \
	   docs/Makefile \
	   docs/reference/Makefile \
	   examples/Makefile \
	   examples/client/Makefile \
	   examples/cm/Makefile \
	   examples/cm/callable/Makefile \
	   examples/cm/channelspecific/Makefile \
	   examples/cm/contactlist/Makefile \
	   examples/cm/echo/Makefile \
	   examples/cm/echo-message-parts/Makefile \
	   examples/cm/extended/Makefile \
	   examples/cm/no-protocols/Makefile \
	   examples/extensions/Makefile \
	   spec/Makefile \
	   telepathy-glib/Makefile \
	   telepathy-glib/telepathy-glib.pc \
	   telepathy-glib/telepathy-glib-uninstalled.pc \
	   tests/Makefile \
	   tests/lib/Makefile \
	   tests/dbus/Makefile \
	   tests/tools/Makefile \
	   tools/Makefile \
	   m4/Makefile
)
