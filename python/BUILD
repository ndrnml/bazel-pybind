py_binary(
    name = "pybind_module",
    srcs = ["pybind_module.py"],
    main = "pybind_module.py",
    # Notice that the dynamically built library is included as `data`.
    data = ["//extension:example_module_name.so",],
    visibility = ["//visibility:public"],
    python_version = "PY3",
)
