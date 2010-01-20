%define ver 1.4.3
%define name loudmouth

%define with_ssl 1

Summary: Loadmouth is a Jabber client written in C.
Name: %name
Version: %ver
Release: imendio.2
Vendor: Imendio
URL: http://www.imendio.com/projects/loudmouth
Source0: %{name}-%{ver}.tar.gz
License: LGPL
Group: System Environment/Libraries
BuildRoot: %{_tmppath}/%{name}-root
Requires: glib2 >= 2.4.0
BuildRequires: glib2-devel >= 2.4.0
BuildRequires: gtk-doc >= 0.10

%if %{with_ssl}
Requires: gnutls >= 1.4.0
Requires: libtasn1 >= 0.2.6
BuildRequires: gnutls-devel >= 1.4.0
BuildRequires: libtasn1-devel >= 0.2.6
%endif

%description
Loudmouth is a lightweight and easy-to-use C library for programming with the Jabber protocol. It's designed to be easy to get started with and yet extensible to let you do anything the Jabber protocol allows. 

%package devel
Summary:	Development files for RoadRunner..
Group: 		Development/Libraries
Requires:	%name = %{PACKAGE_VERSION}
Requires:	glib2-devel >= 2.4.0

%if %{with_ssl}
Requires:       gnutls-devel >= 1.4.0
%endif

%description devel
Loudmouth is a lightweight and easy-to-use C library for programming with the Jabber protocol. It's designed to be easy to get started with and yet extensible to let you do anything the Jabber protocol allows. 

%prep
%setup -q

%build

%configure --enable-gtk-doc \
%if %{with_ssl}
           --with-ssl=yes
%else
           --with-ssl=no
%endif
	  
make

%install
rm -rf %{buildroot}
%makeinstall 

# remove, not shipped
rm -f $RPM_BUILD_ROOT%{_libdir}/libloudmouth-1.la

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc ChangeLog NEWS README COPYING
%{_libdir}/libloudmouth*.so.*

%files devel
%defattr(-,root,root)
%{_libdir}/libloudmouth*.so
%{_libdir}/libloudmouth*.a
%{_libdir}/pkgconfig/*
%{_prefix}/include/loudmouth-1.0
%{_datadir}/gtk-doc/html/loudmouth

%changelog
* Wed Oct 01 2003 Mikael Hallendal <micke@imendio.com>
- Added with_ssl to be able to easily turn of SSL dependency.
  
* Wed Jun 25 2003 Mikael Hallendal <micke@imendio.com>
- Updated to reflect move of project.

* Sat Mar 29 2003 Mikael Hallendal <micke@codefactory.se>
- Initial build
