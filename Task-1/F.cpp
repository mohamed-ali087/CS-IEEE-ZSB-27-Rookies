//
// Created by mohamed on 11/26/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n; cin>>x>>n;

    int part_w[n];
    for (int i = 0; i<n;i++){
        cin >> part_w[i];
    }

    int q; cin>>q;
    set<int> attached;
    while (q--) {
        int p; cin >> p;
        if (attached.contains(p)) {
            x-= part_w[p-1];
            cout << x << endl;
            attached.erase(p);
        } else {
            x+= part_w[p-1];
            cout << x << endl;
            attached.insert(p);
        }
    }
}