#include <gtest/gtest.h>
#include "../include/MyClass1.hxx"

TEST(MyClass1, constructed_object_has_the_right_value)
{
    MyClass1<int> m{123};
    EXPECT_EQ(123, m.value());
}