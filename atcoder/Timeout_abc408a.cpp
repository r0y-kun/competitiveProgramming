#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, s; cin >> n >> s;

  int cnt=0;
  int last=0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    if (t-last>s) cnt++;
    last = t;
  }
  if (cnt>0) cout << "No";
  else cout << "Yes";
}
