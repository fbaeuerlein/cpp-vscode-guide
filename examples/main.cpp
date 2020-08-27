#include "include/MyClass1.hxx"
#include "include/MyClass2.hxx"
#include "include/SomeOtherClass.hxx" // IWYU should remove this
#include <iostream>

int main(int, char **) // NOLINT
{
    std::cout << "Hello, world!\n";

    MyClass1<int> m(0);

    MyClass2 m2(3);

    return m.value();
}
