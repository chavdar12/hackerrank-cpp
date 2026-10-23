#include <gtest/gtest.h>
#include <iostream>
using namespace std;

class A {
public:
    void func(int &a) {
        a *= 2;
        callA++;
    }

    int getA() const { return callA; }

private:
    int callA = 0;
};

class B {
public:
    void func(int &a) {
        a *= 3;
        callB++;
    }

    int getB() const { return callB; }

private:
    int callB = 0;
};

class C {
public:
    void func(int &a) {
        a *= 5;
        callC++;
    }

    int getC() const { return callC; }

private:
    int callC = 0;
};

#include "run_io.hpp"
#include "inheritance/accessing_inherited_functions.hpp"

TEST(AccessingInheritedFunctions, Thirty) {
    D d;
    EXPECT_EQ(run_io("", [&] { d.check(30); }),
              "Value = 30\nA's func called 1 times \nB's func called 1 times\nC's func called 1 times\n");
}

TEST(AccessingInheritedFunctions, RepeatedFactors) {
    D d;
    EXPECT_EQ(run_io("", [&] { d.check(360); }),
              "Value = 360\nA's func called 3 times \nB's func called 2 times\nC's func called 1 times\n");
}
