#pragma once
#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve() {
    map<string, int> m;
    int q;
    cin >> q;
    while (q--) {
        int type;
        string name;
        cin >> type >> name;
        if (type == 1) {
            int marks;
            cin >> marks;
            m[name] += marks;
        } else if (type == 2) {
            m.erase(name);
        } else {
            auto it = m.find(name);
            cout << (it != m.end() ? it->second : 0) << endl;
        }
    }
}
