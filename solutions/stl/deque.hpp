#pragma once
#include <deque>
#include <iostream>
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> q;

    for (int i = 0; i < k; i++) {
        while (!q.empty() && arr[i] > arr[q.back()]) q.pop_back();
        q.push_back(i);
    }

    for (int i = k; i < n; i++) {
        cout << arr[q.front()] << " ";
        while (!q.empty() && q.front() <= i - k) q.pop_front();
        while (!q.empty() && arr[i] > arr[q.back()]) q.pop_back();
        q.push_back(i);
    }
    cout << arr[q.front()] << endl;
}
