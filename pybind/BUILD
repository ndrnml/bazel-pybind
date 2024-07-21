# Adapted from: https://github.com/bazelbuild/bazel/issues/1475
cc_binary(
  name = "binding.so",
  srcs = ["pybind.cc"],
  copts = ["-I/usr/include/python3.10/"],
  linkshared = 1,
  linkstatic = 1,
  deps = [
    "@pybind11//:pybind11",
    "//native:py_module",
    "//cpp:module",
  ],
  visibility = ["//visibility:public"],
)

py_library(
  name = "binding",
  data=[":pybind.so"],
  imports=['.'],
  visibility = ["//visibility:public"],
)
