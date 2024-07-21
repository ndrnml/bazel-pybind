from extension.example_module_name import Module

def main():
    simple_module = Module()
    simple_module.name()

    module_with_name = Module("Hello from Python")
    name = module_with_name.name()
    print(f'print: {name}')


if __name__ == '__main__':
    main()
