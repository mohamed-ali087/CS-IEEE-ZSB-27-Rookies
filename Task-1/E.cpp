//
// Created by mohamed on 11/26/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin>>n;

    stack<pair<int, int>> st;

    for (int i = 1; i<=n;i++) {
        int x; cin>>x;

        while (!st.empty() && x <= st.top().first) {
            st.pop();
        }

        if (st.empty()) {
            cout << '0' << " ";
        } else {
            cout << st.top().second << " ";
        }
        st.push({x, i});
    }

}