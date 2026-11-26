//
// Created by mohamed on 11/25/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;

    vector<int> v;
    set<int> s;
    while (n--) {
        int x; cin >> x;
        v.push_back(x);
        s.insert(x);
    }

    int index1 = -1;
    int index2 = -1;
    for (int i = 0; i<v.size() - 1 /* ignore last element */; i++) {
         if (s.contains(k - v[i])) {
            auto i2 = find(v.begin() + i + 1, v.end(), k - v[i]);
            if (i2 != v.end()) {
                index2 = i2 - v.begin() + 1;
                index1 = i + 1;
                break;
            }
        }
    }

    if (index1 < 0 ||  index2 < 0) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    cout << index1 << " " << index2 << endl;

}