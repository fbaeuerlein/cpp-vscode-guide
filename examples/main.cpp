#include "include/MyClass1.hxx"
#include <iostream>

int main(int, char **) // NOLINT
{
    std::cout << "Hello, world!\n";

    MyClass1<int> m(0);

    return m.value();
}
