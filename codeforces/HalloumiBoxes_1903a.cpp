#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    long long n, k; cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    if (k>1 || is_sorted(v.begin(), v.end())) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
