#pragma once
#include <iostream>
#include <set>
using namespace std;

void solve() {
    set<int> s;
    int q;
    cin >> q;
    while (q--) {
        int type, x;
        cin >> type >> x;
        if (type == 1) {
            s.insert(x);
        } else if (type == 2) {
            s.erase(x);
        } else {
            cout << (s.count(x) ? "Yes" : "No") << endl;
        }
    }
}
