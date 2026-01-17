#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p, q; cin >> p >> q;
  int x, y; cin >> x >> y;
  if (p<=x && x<=p+99 && q<=y && y<=q+99) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
