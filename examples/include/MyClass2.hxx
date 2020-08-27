#ifndef __MY_CLASS_2_HXX__
#define __MY_CLASS_2_HXX__
#include <stdio.h>
#include <algorithm>
#include <functional>
// iwyu should move to cpp
#include <iostream>

// iwyu should suggest a fwd declaration here
#include "MyClass1.hxx"

template <typename T> class MyClass1;

class MyClass2
{
    public:
    MyClass2(int x);

    int value() const;

    private:

    MyClass1<int> * _some_class;
    int _val;
};

#endif // __MY_CLASS_2_HXX__