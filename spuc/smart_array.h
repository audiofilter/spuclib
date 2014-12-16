#ifndef SPUC_SMART_ARRAY
#define SPUC_SMART_ARRAY

// Copyright (c) 2014, Tony Kirke. License: MIT License (http://www.opensource.org/licenses/mit-license.php)
// from directory: spuc_templates
#include <memory>
#include <spuc/spuc_types.h>
namespace SPUC {
//! author="Tony Kirke" *
//! SPUC - Signal processing using C++ - A DSP libraryy

//!
//!  \file
//!  \brief wrapper for boost shared array that keeps track of
//!  number of elements
template <class T> class smart_array : public std::unique_ptr<T[]> {
 public:
  //! Default constructor
  smart_array() {}
  //! Create an smart_array of size n
  smart_array(long n) : std::unique_ptr<T[]>(new T[n]) { elements = n; }
  void resize(long n) {
    elements = n;
    std::unique_ptr<T[]>::reset(new T[n]);
  }
  long len() const { return (elements); }

 private:
  long elements;
};
}  // namespace SPUC
#endif
