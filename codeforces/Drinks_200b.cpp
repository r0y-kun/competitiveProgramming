#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  float n, r=0; cin >> n;
  for (int i=0; i<n; i++) {
    float x; cin >> x;
    r += x;
  }
  cout << r/n;
  return 0;
}
