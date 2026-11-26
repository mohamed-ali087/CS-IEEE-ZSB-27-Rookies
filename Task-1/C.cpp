//
// Created by mohamed on 11/25/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >>n;

    set<int> s;
    int x;
    while (cin >>x ) {
        s.insert(x);
    }

    cout << s.size() << endl;
}