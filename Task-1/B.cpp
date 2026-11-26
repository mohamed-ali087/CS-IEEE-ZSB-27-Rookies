//
// Created by mohamed on 11/25/26.
//


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  n ; cin >>n;

    long long sum = n*(n + 1) / 2;
    if (sum%2 > 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    stack<int> st;
    for (int i = 1; i <= n; i++) {
        st.push(i);
    }
    vector<int> s1;
    vector<int> s2;
      while (!st.empty()){
          if (st.size() >=  4 ) {
              s1.push_back(st.top()); st.pop();
              s2.push_back(st.top()); st.pop();
              s2.push_back(st.top()); st.pop();
              s1.push_back(st.top()); st.pop();
          } else {
              s2.push_back(st.top()); st.pop();
              s1.push_back(st.top()); st.pop();
              s1.push_back(st.top()); st.pop();
          }
    }

    cout << s1.size() << endl;
    for (int i = s1.size()-1;i >= 0; i--) {
        cout << s1[i] << " ";
    }
    cout << endl;
    cout << s2.size() << endl;
    for (int i = s2.size()-1;i >= 0; i--) {
        cout << s2[i] << " ";
    }
}