//
// Created by mohamed on 11/24/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    fill(v.begin(), v.end(), 0);

    char x;
    char last = '_';
    while (cin >> x) {
        if (x != last) {
            v.push_back(1);
            last = x;
        } else {
            v.back()++;
        }
    }

    const auto max = max_element(v.begin(), v.end());
    cout << *max << endl;
}