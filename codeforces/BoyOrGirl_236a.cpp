#include <bits/stdc++.h>
using namespace std;

int cntDist(string str) {
  unordered_set<char> s;

  for (int i = 0; i < str.size(); i++) {
    s.insert(str[i]);
  }
  return s.size();
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  if (cntDist(s)%2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}
