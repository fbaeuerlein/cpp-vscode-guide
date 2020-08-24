#include <iostream>
#include "include/MyClass1.hxx"

int main(int, char **) // NOLINT
{
    std::cout << "Hello, world!\n";
    
    MyClass1<int> m(0);

    return m.value();

}

