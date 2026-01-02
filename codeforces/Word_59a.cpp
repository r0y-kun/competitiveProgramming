#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin >> s;

  int up=0, dwn=0;
  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) {
      up++;
    }else {
      dwn++;
    }
  }
  if (up>dwn) {
    for (int i = 0; i < s.size(); i++) {
      if (islower(s[i])) s[i] = toupper(s[i]);
    }
  }else {
    for (int i = 0; i < s.size(); i++) {
      if (isupper(s[i])) s[i] = tolower(s[i]);
    }
  }

  cout << s << "\n";
  return 0;
}
