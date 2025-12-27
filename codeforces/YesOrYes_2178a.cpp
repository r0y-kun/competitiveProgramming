#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; 
  cin >> t;
  vector<string> v(t);

  for (int i = 0; i < t; i++) { 
      string s; cin >> s; 
      v[i]="YES";
      for (int j = 0; j < s.size() - 1; j++) {
        if (s[j] == 'Y' && s[j + 1] == 'Y') v[i] = "NO";
        break;
      }
  }
  for (int i = 0; i < t; i++) cout << v[i] << "\n";
  return 0;
}

