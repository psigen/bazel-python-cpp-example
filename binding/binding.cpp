#include <pybind11/pybind11.h>
#include "native/native.h"

PYBIND11_MODULE(binding, m)
{
  m.doc() = "pybind11 example plugin";
  m.def("add", &add, "A function which adds two numbers");
}
