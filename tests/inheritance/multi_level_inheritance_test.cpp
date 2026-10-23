#include <gtest/gtest.h>
#include <iostream>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle\n";
    }
};

#include "run_io.hpp"
#include "inheritance/multi_level_inheritance.hpp"

TEST(MultiLevelInheritance, CallsEveryLevel) {
    Equilateral eqr;
    EXPECT_EQ(run_io("", [&] {
        eqr.equilateral();
        eqr.isosceles();
        eqr.triangle();
    }), "I am an equilateral triangle\nI am an isosceles triangle\nI am a triangle\n");
}
