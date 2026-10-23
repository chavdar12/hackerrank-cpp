#pragma once
#include <sstream>
#include <string>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> integers;
    int n;
    char c;
    while (ss >> n) {
        integers.push_back(n);
        ss >> c;
    }
    return integers;
}
