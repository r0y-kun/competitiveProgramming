#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;

  while (t--) {
    int n; cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;

    int last = v[0];
    int ops = 0;

    for (int i = 1; i < n; i++) {
      if (v[i] >= last) {
        last = v[i];
      } else {
        ops++;
      }
    }
    cout << ops << "\n";
  }
}
