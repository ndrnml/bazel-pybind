#include "module.h"

#include <iostream>

Module::Module() {
    std::cout << "C++ create default object" << std::endl;
}

Module::Module(const std::string& name) : name_(name) {
     std::cout << "C++ create: " << name << std::endl;
}

Module::~Module() {
    std::cout << "C++ destroy object: " << name_ << std::endl;
}

std::string Module::Name() {
    return name_;
}
