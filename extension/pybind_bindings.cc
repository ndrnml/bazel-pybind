#include <pybind11/pybind11.h>

#include <string>

#include "cpp/module.h"

namespace py = pybind11;

PYBIND11_MODULE(example_module_name, m) {
    m.doc() = "pybind11 example module binding, using the `pybind_extension` rule";

    py::class_<Module>(m, "Module")
        .def(py::init<>())
        .def(py::init<std::string>())
        .def("name", &Module::Name);
}
