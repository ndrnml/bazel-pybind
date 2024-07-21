package(default_visibility = ["//visibility:public"])

cc_library(
  name = "pybind11",
  hdrs = glob(
    include = [
      "include/pybind11/*.h",
      "include/pybind11/detail/*.h",
      "include/pybind11/common.h",
      "include/pybind11/eigen.h",
    ],
  ),
  copts = [
    "-fexceptions",
    "-Wno-undefined-inline",
    "-Wno-pragma-once-outside-header",
  ],
  includes = ["include"]
)
