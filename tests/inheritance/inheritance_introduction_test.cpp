#include <gtest/gtest.h>
#include <iostream>
using namespace std;

class Triangle {
public:
    void triangle() {
        cout << "I am a triangle\n";
    }
};

#include "run_io.hpp"
#include "inheritance/inheritance_introduction.hpp"

TEST(InheritanceIntroduction, Describes) {
    Isosceles isc;
    EXPECT_EQ(run_io("", [&] {
        isc.isosceles();
        isc.description();
        isc.triangle();
    }), "I am an isosceles triangle\nIn an isosceles triangle two sides are equal\nI am a triangle\n");
}
