//
// Created by mohamed on 11/26/26.
// Time Limit


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> input;

    int smaller_idx[n]; // zero based
    for (int i = 0; i<n ; i++) {
        int x; cin >> x;
        if (input.empty()) {
            smaller_idx[i] = -1;
        } else {
            if (input.back() < x) {
                smaller_idx[i] = input.size() - 1;
            } else {
                smaller_idx[i] = -1;
                int c = i-1;
                int curr_idx = smaller_idx[c];
                while (curr_idx > -1) {
                    if (input[curr_idx] < x) {
                        smaller_idx[i] = curr_idx;
                        break;
                    }
                    curr_idx = smaller_idx[--c];
                }
            }
        }

        input.push_back(x);
    }

    for (auto n: smaller_idx) {
        cout << n + 1 << " ";
    }
}