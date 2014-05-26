### Build status - Mac Os X, clang
[![Build Status](https://travis-ci.org/audiofilter/spuclib.png)](https://travis-ci.org/audiofilter/spuclib)

[![Gitter chat](https://badges.gitter.im/audiofilter/spuclib.png)](https://gitter.im/audiofilter/spuclib)

This is an update of code that has been on sourceforge for about 14 years. The genesis of this code goes back even further - before decent C++ template support and availability of a useful complex class.

For now, this project is a partial copy of spuc. Common files will be moved from spuc into spuclib

More documentation pages here

http://audiofilter.github.io/spuc/
[http://audiofilter.github.io/spuc/]

Since the code on sourceforge, has not compiled for modern compilers for several years, this update fixes compiler errors and other bugs found in more real-life testing. Also various parts have been updated/upgraded.

Companion projects such as *spuc_filter* and *spuc_fixed* are also available.
The former is a complete example of a gui-based Digital Filter design program

Travis is being used to display the build integrity and uses Clang on Mac OSX 10.9. However, this should also work fine with GCC 4.8

