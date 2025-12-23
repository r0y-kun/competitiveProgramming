#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  vector<int> ans(t);

  for (int i = 0; i < t; i++) {
    int k=0, n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i]; k += v[i];
    }
    auto it = max_element(v.begin(), v.end());
    int mx = *it;
    v.erase(it);
    ans[i]=mx-(k-mx);
  }

  for (int i = 0; i < t; i++) cout << ans[i] << "\n";
  return 0;
}
