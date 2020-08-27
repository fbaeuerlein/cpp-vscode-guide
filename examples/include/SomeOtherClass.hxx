#ifndef __SOME_OTHER_CLASS_HXX__
#define __SOME_OTHER_CLASS_HXX__

#include "MyClass1.hxx"
#include <iostream>
#include <string>

class SomeOtherClass
{
  public:
  SomeOtherClass();
  private:
    MyClass2 * member_that_could_be_forward_declared;
};

#endif