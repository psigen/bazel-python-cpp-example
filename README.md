# bazel-python-cpp-example

Example of a bazel python/cpp binding that includes a transitive dependency.

- `//native` contains a simple C++ library that has one function.
- `//binding` contains a pybind11 C++ binary that links to the function in `//native`
- `test_binding.py` is a unit test that imports the binding and runs the included
  function. This requires that the transitively linked `//native` library also be
  loaded into the sandbox for `test_binding.py`, solely through its dependence
  on `//binding`.
