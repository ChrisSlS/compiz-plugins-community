AC_PREREQ(2.57)

AC_INIT([compiz-plugins-community], [0.8.17], [info@futuramerlin.com])
AM_INIT_AUTOMAKE([1.9 foreign dist-xz no-dist-gzip check-news])
AC_CONFIG_HEADER([config.h])
AM_MAINTAINER_MODE

AC_ISC_POSIX
AC_PROG_CC
AC_PROG_CPP
AC_PROG_CXX
LT_INIT
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h sys/time.h unistd.h])
IT_PROG_INTLTOOL([0.35.0])
AC_CONFIG_MACRO_DIR([m4])
AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.19])
GETTEXT_PACKAGE=compiz-plugins-community
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE", [Gettext package.])
AC_SUBST(GETTEXT_PACKAGE)

if test "x$GCC" = "xyes"; then
  case " $CFLAGS " in
  *[[\ \	]]-Wall[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wall" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-Wpointer-arith[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wpointer-arith" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-Wstrict-prototypes[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wstrict-prototypes" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-Wmissing-prototypes[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wmissing-prototypes" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-Wmissing-declarations[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wmissing-declarations" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-Wnested-externs[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -Wnested-externs" ;;
  esac

  case " $CFLAGS " in
  *[[\ \	]]-fno-strict-aliasing[[\ \	]]*) ;;
  *) CFLAGS="$CFLAGS -fno-strict-aliasing" ;;
  esac

  if test "x$enable_ansi" = "xyes"; then
    case " $CFLAGS " in
    *[[\ \	]]-ansi[[\ \	]]*) ;;
    *) CFLAGS="$CFLAGS -ansi" ;;
    esac

    case " $CFLAGS " in
    *[[\ \	]]-pedantic[[\ \	]]*) ;;
    *) CFLAGS="$CFLAGS -pedantic" ;;
    esac
  fi
fi

AC_C_BIGENDIAN

plugindir=$libdir/compiz
AC_SUBST(plugindir)

imagedir=$datadir/compiz
AC_SUBST(imagedir)

metadatadir=$datadir/compiz
AC_SUBST(metadatadir)

compdatadir=$datadir/compiz
AC_SUBST(compdatadir)

pluginiconsdir=$datadir/compiz/icons/hicolor
AC_SUBST(pluginiconsdir)

dnl ============================================================
dnl Check for the pkg-config path.
if test x"$PKG_CONFIG_PATH" = x; then
    PKG_CONFIG_PATH=${prefix}/lib/pkgconfig:${prefix}/share/pkgconfig
        else
    PKG_CONFIG_PATH=${prefix}/lib/pkgconfig:${prefix}/share/pkgconfig:${PKG_CONFIG_PATH}
fi
export PKG_CONFIG_PATH
AC_SUBST(PKG_CONFIG_PATH)
AC_MSG_NOTICE([Using PKG_CONFIG_PATH=$PKG_CONFIG_PATH])

PKG_CHECK_MODULES(COMPIZ, compiz)
PKG_CHECK_MODULES(BCOP, bcop >= 0.7.3, [bcop_found=yes])
if test "$bcop_found" = yes; then
  if test -z "$PKG_CONFIG"; then
      AC_PATH_PROG(PKG_CONFIG, pkg-config, no)
  fi
  if test "$PKG_CONFIG" != "no" ; then
      BCOP_BIN=`$PKG_CONFIG --variable=bin bcop`
      AC_SUBST(BCOP_BIN)
  fi
fi

AC_MSG_CHECKING(for GL_CFLAGS)
AC_ARG_WITH(gl-cflags, [  --with-gl-cflags=CFLAGS ],
		       [GL_CFLAGS="$withval"],
		       [GL_CFLAGS=""])

AC_MSG_RESULT($GL_CFLAGS)
AC_MSG_CHECKING(for GL_LIBS)
AC_ARG_WITH(gl-libs, [  --with-gl-libs=LIBS ],
		     [GL_LIBS="$withval"],
		     [GL_LIBS="-lGL"])
AC_MSG_RESULT($GL_LIBS)

AC_SUBST(GL_CFLAGS)
AC_SUBST(GL_LIBS)

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lpthread':
AC_CHECK_LIB([pthread], [main])
AC_CHECK_LIB([lcwiid], [main])

PKG_CHECK_MODULES(PANGO, cairo-xlib-xrender pangocairo cairo >= 1.0, [have_pango=yes], [have_pango=no])
PKG_CHECK_MODULES(XTST, xtst, [have_xtst=yes], [have_xtst=no])

AM_CONDITIONAL(VISUALEVENT_PLUGIN, test "x$have_pango" = "xyes" && test "x$have_xtst" = "xyes")
if test "x$have_pango" = "xyes"; then
  AC_DEFINE(USE_VISUALEVENT, 1, [Build visualevent plugin])
fi

PKG_CHECK_MODULES(COMPIZMOUSEPOLL, compiz-mousepoll, [have_compiz_mousepoll=yes], [have_compiz_mousepoll=no])
AM_CONDITIONAL(DODGE_PLUGIN, test "x$have_compiz_dodge" = "xyes")

PKG_CHECK_MODULES(CWIID, cwiid, [have_cwiid=yes], [have_cwiid=no])
AM_CONDITIONAL(WIITRACK_PLUGIN, test "x$have_cwiid=yes" = "xyes" && test "x$have_cwiid" = "xyes")

PKG_CHECK_MODULES(CWIID,cwiid, [have_cwiid=yes], [have_cwiid=no])
AM_CONDITIONAL(WIIMOTE_PLUGIN, test "x$have_cwiid=yes" = "xyes" && test "x$have_cwiid" = "xyes")

PKG_CHECK_MODULES(OPENCV,opencv >= 2.0, [have_opencv=yes], [have_opencv=no])
AM_CONDITIONAL(HEADTRACKING_PLUGIN, test "x$have_opencv=yes" = "xyes" && test "x$have_opencv" = "xyes")

AC_PATH_PROG(UPDATE_ICON_CACHE, gtk-update-icon-cache)

AC_OUTPUT([
compiz-visualevent.pc
Makefile
data/Makefile
data/headtracking/Makefile
icons/Makefile
images/Makefile
images/boing/Makefile
images/roach/Makefile
metadata/Makefile
src/Makefile
src/boing/Makefile
src/desktopclick/Makefile
src/dodge/Makefile
src/flash/Makefile
src/headtracking/Makefile
src/lazypointer/Makefile
src/maze/Makefile
src/mousegestures/Makefile
src/newton/Makefile
src/peek/Makefile
src/prompt/Makefile
src/roach/Makefile
src/rubik/Makefile
src/showrepaint/Makefile
src/visualevent/Makefile
src/wiimote/Makefile
src/wiitrack/Makefile
src/windowcapture/Makefile
po/Makefile.in
])
