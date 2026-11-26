//
// Created by mohamed on 11/25/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (mp.count(k - x)) {
            cout << mp[k - x] << " " << i << "\n";
            return 0;
        }
        mp[x] = i;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}