#pragma once
#include <iostream>
using namespace std;

class Complex {
public:
    int a, b;

    Complex operator+(Complex other) {
        return Complex{a + other.a, b + other.b};
    }
};

istream &operator>>(istream &is, Complex &c) {
    char plus, i;
    return is >> c.a >> plus >> i >> c.b;
}

ostream &operator<<(ostream &os, Complex c) {
    return os << c.a << "+i" << c.b;
}
