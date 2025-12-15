#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, l, r; cin >> n >> l >> r;
  string s; cin >> s;

  int cnt=1;
  for (int i = l-1; i < r; i++) {
    if (s[i]!='o') {
      cnt++;
    }
  }
  cnt>1 ? cout << "No" : cout << "Yes";
}
