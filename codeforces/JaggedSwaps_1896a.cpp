#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    int n; cin >> n;

    bool big=false;
    vector<int> v(n);
    for (auto &x : v) {
      cin >> x;
    }

    auto minInt = min_element(v.begin(), v.end());

    if (*minInt == v[0]) big=true;

    if (big==true) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
