#pragma once
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

#define INF INT_MAX
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = INF, mx = -INF;
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    cout << "Result = " << mx - mn << "\n";
}
