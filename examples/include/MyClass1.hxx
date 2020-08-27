#ifndef __MY_CLASS_1_HXX__
#define __MY_CLASS_1_HXX__
#include <functional>
#include <algorithm>
#include <stdio.h>

template<typename T>
class MyClass1
{
    public:
    explicit MyClass1(T && v) : _v(std::forward<T>(v)) {}

    T & value() { return _v; }
    T const & value() const { return _v; }

    private:
    T _v; 

};
#endif // __MY_CLASS_1_HXX__