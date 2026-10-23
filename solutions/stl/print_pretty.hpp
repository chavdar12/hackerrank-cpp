#pragma once
#include <iomanip>
#include <iostream>
using namespace std;

void print_pretty(double A, double B, double C) {
    cout << hex << left << showbase << nouppercase;
    cout << (long long) A << endl;

    cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
    cout << B << endl;

    cout << scientific << uppercase << noshowpos << setprecision(9);
    cout << C << endl;
}
