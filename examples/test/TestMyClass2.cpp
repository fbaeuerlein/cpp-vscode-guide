#include <gtest/gtest.h>
#include "../include/MyClass1.hxx"

TEST(MyClass2, constructed_object_has_the_right_value)
{
    MyClass2 m{123};
    EXPECT_EQ(12300, m.value());
}