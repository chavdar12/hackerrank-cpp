#pragma once
#include <algorithm>
#include <vector>
using namespace std;

int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());
    int maxDist = max(c[0], n - 1 - c.back());
    for (size_t i = 1; i < c.size(); i++) {
        maxDist = max(maxDist, (c[i] - c[i - 1]) / 2);
    }
    return maxDist;
}
