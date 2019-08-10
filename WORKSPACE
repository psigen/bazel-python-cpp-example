load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "python3",
    urls = ["https://www.python.org/ftp/python/3.6.3/Python-3.6.3.tgz"],
    strip_prefix = "Python-3.6.3",
    build_file = "//:python3.BUILD",
)

http_archive(
  name = "pybind11",
  urls = [
    "https://mirror.bazel.build/github.com/pybind/pybind11/archive/v2.3.0.tar.gz",
    "https://github.com/pybind/pybind11/archive/v2.3.0.tar.gz",
  ],
  sha256 = "0f34838f2c8024a6765168227ba587b3687729ebf03dc912f88ff75c7aa9cfe8",
  strip_prefix = "pybind11-2.3.0",
  build_file = "//:pybind11.BUILD"
)