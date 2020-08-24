#ifndef __MY_CLASS_1_HXX__
#define __MY_CLASS_1_HXX__
#include <functional>

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

class MyClass2
{
    public:
    MyClass2(int x) : _val(x)
    {
        if ( _val > 5 )
        {
            _val *= 100;
        }
        else
        {
            _val += 100;
        }
        
    }

    int value() const { return _val; }

    private:

    int _val;
};

#endif // __MY_CLASS_1_HXX__