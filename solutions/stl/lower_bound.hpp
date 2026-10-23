#pragma once
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        auto it = lower_bound(arr.begin(), arr.end(), x);
        cout << (it != arr.end() && *it == x ? "Yes " : "No ") << (it - arr.begin() + 1) << endl;
    }
}
