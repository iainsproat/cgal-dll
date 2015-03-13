# Introduction #
From the [CGAL](http://www.cgal.org) project website:

> "The goal of the CGAL Open Source Project is to provide easy access to efficient and reliable geometric algorithms in the form of a C++ library"

When compiling the [CGAL source code](http://www.cgal.org/download.html), on windows CGAL is compiled to a [static library](http://en.wikipedia.org/wiki/Static_library).

Unfortunately, binding to CGAL from other languages is often not possible as most binding frameworks require a [dynamic-link library](http://en.wikipedia.org/wiki/Dynamic-link_library) (dll).

This project aims to provide a dll for CGAL.

# Prerequisites #

  * You will be building CGAL and CGAL-dll from source, and should be familiar with compiling C++ projects from source using [cmake](http://www.cmake.org/) and  Visual Studio.

  * Visual Studio 2010. (Microsoft offer a free [version](http://www.microsoft.com/visualstudio/en-us/products/2010-editions/visual-cpp-express))

  * Microsoft Windows 32 bit.

  * Some dependencies may require administrator rights when installing, please refer to the details of these separate packages.

# Build #

  1. Download and install [boost](http://www.boost.org/).
  1. Download and build [CGAL](http://www.cgal.org/). Detailed instruction for this are available at the [CGAL website](http://acg.cs.tau.ac.il/cgal-at-tau/installing-cgal-and-related-programs-on-windows). You only need to build the core, and building with GMP is not required.
  1. Copy the built CGAL /lib folder to the installation directory of CGAL.  On Windows the CGAL installation directory is typically `C:\Program Files\CGAL-3.8`.  e.g. If you had built CGAL to `C:\Program Files\CGAL-3.8\bin` , then you would need to copy the folder `C:\Program Files\CGAL-3.8\bin\lib` to `C:\Program Files\CGAL-3.8\lib`
  1. Copy the CGAL `compiler_config.h` file from the CGAL build directory, e.g. `C:\Program Files\CGAL-3.8\bin\include\CGAL\compiler_config.h`, to the `\include\CGAL` directory in the CGAL installation directory, e.g. `C:\Program Files\CGAL-3.8\include\CGAL\compiler_config.h`.
  1. When CGAL was installed it should have set the environment variable `CGAL_DIR` already.  If not, then please [set](http://confluence.atlassian.com/display/DOC/Setting+the+JAVA_HOME+Variable+in+Windows) the `CGAL_DIR` environment variable to point to the CGAL installation directory, e.g. `C:\Program Files\CGAL-3.8`.
  1. [set a new environment variable](http://confluence.atlassian.com/display/DOC/Setting+the+JAVA_HOME+Variable+in+Windows) `BOOST` to point to your Boost installation directory, e.g. `C:\Program Files\boost\boost_1_46_1`.
  1. Download the CGAL-DLL sources from [Subversion](http://code.google.com/p/cgal-dll/source/checkout)
  1. Open the sources and build in Visual Studio.  The projects should be built in turn. Build CGAL-DLL-Core first.
  1. An example console application is supplied, you can build that after the CGAL-DLL-Core project has been built.

### Typical errors when building ###

  * **libboost\_thread-vc100-mt-gd-1\_46\_1.lib cannot be found**.  This may be encountered when building CGAL-dll in _Debug_ configuration and when your installation of boost has not included debug files.  You can download this file from http://sourceforge.net/projects/boost/files/boost-binaries/1.46.1/libboost_thread-vc100-mt-gd-1_46_1.zip. Unzip the file and copy it to your Boost lib directory, e.g. `C:\Program Files\boost\boost_1_46_1\lib\libboost_thread-vc100-mt-gd-1_46_1.lib`.

  * **gmp.h cannot be found**.  You have built CGAL with GMP, which is not required.  You can either:
    * rebuild CGAL with the GMP option turned off, or
    * go to the compiler\_config.h file, typically found at `C:\Program Files\CGAL-3.8\bin\include\CGAL\compiler_config.h` and comment out the following two lines:
> //#define CGAL\_USE\_GMP 1

> //#define CGAL\_USE\_MPFR 1