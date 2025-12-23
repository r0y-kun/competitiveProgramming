#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  int n; cin >> n;
  string s; cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if ((s[i]+n)<91)s[i] = s[i]+n;
    else s[i] = (s[i] - 26) + n;
  }
  cout << s;
}
