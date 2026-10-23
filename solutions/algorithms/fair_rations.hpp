#pragma once
#include <string>
#include <vector>
using namespace std;

string fairRations(vector<int> B) {
    int loaves = 0;
    for (size_t i = 0; i + 1 < B.size(); i++) {
        if (B[i] % 2 != 0) {
            B[i]++;
            B[i + 1]++;
            loaves += 2;
        }
    }
    if (B.back() % 2 != 0) return "NO";
    return to_string(loaves);
}
