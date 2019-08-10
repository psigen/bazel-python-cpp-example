genrule(
  name = "build_python",
  srcs = glob(["**"]),
  outs = ["python", "pyconfig.h"],
  cmd = "./external/python3/configure && make && cp python $(RULEDIR)/python && cp pyconfig.h $(RULEDIR)/pyconfig.h",
  visibility = ["//visibility:public"],
)

cc_library(
  name = "dev",
  hdrs = glob(["Include/*.h"]),
  srcs = glob(["Include/*.h"]),
  strip_include_prefix = "Include",
  visibility = ["//visibility:public"],
  deps = [":build_python"]
)
