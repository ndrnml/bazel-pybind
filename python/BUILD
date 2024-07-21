py_binary(
    name = "pybind_module_example",
    srcs = ["pybind_module_example.py"],
    main = "pybind_module_example.py",
    # Notice that the dynamically built library is included as `data`.
    data = ["//extension:example_module_name.so",],
    visibility = ["//visibility:public"],
    python_version = "PY3",
)
