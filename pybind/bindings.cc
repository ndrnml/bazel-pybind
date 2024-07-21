#include <pybind11/pybind11.h>

#include "native/py_module.h"

#include "src/module.h"

namespace py = pybind11;

PYBIND11_MODULE(binding, m) {
    m.doc() = "pybind11 example module binding";
    py::class_<PyModule>(m, "PyModule")
        .def(py::init<>())
//        .def(py::init<Module::Options>())
        .def("run", &PyModule::Run);

//    py::class_<Module::Options>(m, "Options")
//        .def(py::init<>())
//        .def_readwrite("option1", &Module::Options::option1)
//        .def_readwrite("option2", &Module::Options::option2)
//        .def_readwrite("option3", &Module::Options::option3);
}
