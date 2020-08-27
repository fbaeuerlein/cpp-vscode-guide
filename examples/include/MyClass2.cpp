#include "MyClass2.hxx"

MyClass2::MyClass2(int x) : _val(x)
{
    if (_val > 5)
    {
        _val *= 100;
    }
    else
    {
        _val += 100;
    }

    std::cout << "Constructed!" << std::endl;
}

int MyClass2::value() const { return _val; }
