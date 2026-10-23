#pragma once
#include <iomanip>
#include <iostream>
using namespace std;

void solve() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n"
            << fixed << setprecision(3) << d << "\n"
            << setprecision(9) << e << "\n";
}
