#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  vector<int> v(n);
  for (auto &c : v) cin >> c;

  int cnt=1, ans=1;
  for (int i=1; i<n; i++){
    if (v[i-1]<v[i])cnt++;
    else cnt=1;

    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
