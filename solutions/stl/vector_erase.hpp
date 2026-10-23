#pragma once
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> x;
    v.erase(v.begin() + x - 1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (int y: v) {
        cout << y << " ";
    }
}
