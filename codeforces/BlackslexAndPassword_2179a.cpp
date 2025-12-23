#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  vector<int> v(t);

  for (int i = 0; i < t; i++) {
    int k, x; cin >> k >> x;
    v[i]=(k*x)+1;
  }

  for (int i = 0; i < t; i++) {
    cout << v[i] <<"\n";
  }
  return 0;
}
