load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")

# This example uses pybind_extensions as described here: https://github.com/pybind/pybind11_bazel
pybind_extension(
    name = "example_module_name",
    srcs = ["pybind_bindings.cc"],
    deps = ["//cpp:module",],
    visibility = ["//visibility:public"],
)
