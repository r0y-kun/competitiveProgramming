#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    int n, x; cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int dis=0;
    for (int i = 1; i < n; i++) {
      if ((v[i] - v[i-1]) > dis) dis=v[i]-v[i-1];
    }
    cout << max(dis,max(2*(x-(v[n-1])), v[0])) << "\n";
  }
  return 0;
}
