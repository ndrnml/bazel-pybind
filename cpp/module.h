#ifndef CPP_MODULE_H_
#define CPP_MODULE_H_

#include <string>

class Module {
public:
    Module();
    Module(const std::string& name);
    ~Module();

    std::string Name();

private:
    std::string name_;
};

#endif  // CPP_MODULE_H_
