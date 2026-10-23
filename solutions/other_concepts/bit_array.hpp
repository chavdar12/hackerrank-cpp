#pragma once
#include <iostream>
using namespace std;

void solve() {
    unsigned int N, S, P, Q;
    cin >> N >> S >> P >> Q;

    const unsigned int mod = 1u << 31;
    unsigned int prev = S;
    int numDistinct = 1;
    for (unsigned int i = 1; i < N; i++) {
        S = (S * P + Q) % mod;
        numDistinct += (S != prev) ? 1 : 0;
        prev = S;
    }

    cout << numDistinct;
}
