#ifndef __MY_CLASS_2_HXX__
#define __MY_CLASS_2_HXX__
#include <algorithm>
#include <functional>
#include <stdio.h>
// iwyu should move to cpp
#include <iostream>

// iwyu should suggest a fwd declaration here
#include "MyClass1.hxx"

template <typename T>
class MyClass1;

class MyClass2
{
  public:
    MyClass2(int x);
    MyClass2() = delete;
    MyClass2(MyClass2 &&) = delete;
    MyClass2(MyClass2 const &) = delete;
    MyClass2 & operator=(MyClass2 const & ) = default;
    MyClass2 & operator=(MyClass2 && ) = default;

    ~MyClass2() = default;

    auto value() -> int const;

  private:
    MyClass1<int> * _some_class;
    int _val;
};

#endif // __MY_CLASS_2_HXX__