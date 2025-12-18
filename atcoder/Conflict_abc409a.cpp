#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;
  string t, a; cin >> t >> a;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (t[i]=='o' && a[i]=='o') cnt++;
  }
  if (cnt>0) cout << "Yes";
  else cout << "No";
}
