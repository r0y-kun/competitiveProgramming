#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    int n, x; cin >> n >> x;

    vector<int> v(n);
    int cnt=0;
    cin >> v[0];
    for (int i = 1; i < n; i++) {
      cin >> v[i]; 
      if (abs(v[i-1]-v[i]) > cnt) cnt=abs(v[i-1]-v[i]);
    }

    if (n==1) cout << max(v[0], abs(v[0]-x)*2) << "\n";
    else cout << max(abs((v[n-1]-x)*2), cnt) << "\n";
  }
  return 0;
}
