#pragma once
#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

string find_val(vector<string> &s, string to_find, const char del) {
    size_t pos = to_find.find("~", 0);
    string search = to_find.substr(0, pos);
    string val = to_find.substr(pos + 1);

    deque<string> tags;
    deque<string> live_tags;

    stringstream sssub(search);
    string item;
    while (getline(sssub, item, del)) {
        tags.push_back(item);
    }

    for (auto c: s) {
        size_t tags_type = c.find("/", 0);
        if (tags_type == string::npos) {
            live_tags.push_front(c.substr(1, c.find(" ") - 1));
        }

        if (c.find(' ' + val) != string::npos &&
            tags.size() == 1 &&
            c.substr(1, tags[0].size()) == tags[0] &&
            c.substr(c.find(val), val.size()) == val &&
            tags[0] == live_tags[0] &&
            count(search.begin(), search.end(), '.') + 1 == (long) live_tags.size()) {
            string tmp = c.substr(c.find(val));
            tmp = tmp.substr(tmp.find('"') + 1);
            return tmp.substr(0, tmp.find('"'));
        } else if (c.substr(1, tags[0].size()) == tags[0] && tags.size() > 1) {
            tags.pop_front();
        }

        if (tags_type != string::npos) {
            live_tags.pop_front();
        }
    }

    return "Not Found!";
}

void solve() {
    int n, q;
    cin >> n >> q >> ws;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string tmp;
        getline(cin, tmp);
        v.push_back(tmp);
    }
    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;
        cout << find_val(v, query, '.') << "\n";
    }
}
