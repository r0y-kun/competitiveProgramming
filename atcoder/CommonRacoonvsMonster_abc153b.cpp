#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  int h, n; cin >> h >> n;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    h -= a;
  }
  if (h<=0) cout << "Yes";
  else cout << "No";
}
