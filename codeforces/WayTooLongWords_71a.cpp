#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    if (s.size()>10) v[i] = s[0] + to_string(s.size()-2) + s[s.size()-1];
    else v[i] = s;
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << "\n";
  }
  return 0;
}
