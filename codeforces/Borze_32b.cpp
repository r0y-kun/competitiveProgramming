#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;
  string ans;
  for (int i = 0; i < s.size(); i++) {
    if (s[i]=='-' && (s[i+1]=='.')) {
      ans += '1';
      i++;
    }else if (s[i]=='-' && (s[i+1]=='-')) {
      ans += '2';
      i++;
    }else {
      ans += '0';
    }
  }
  cout << ans;
  return 0;
}
