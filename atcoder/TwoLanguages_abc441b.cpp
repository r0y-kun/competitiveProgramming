#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;
  string s, t; cin >> s >> t;
  int q; cin >> q;

  vector<string> v(q);
  for (int i = 0; i < q; i++) {
    cin >> v[i];
  }

  string ukn = s-t;
  cout << ukn;
  return 0;
}
