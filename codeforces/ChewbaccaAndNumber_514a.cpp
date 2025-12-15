#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string x; cin >> x;

  for (int i = 0; i < x.size(); i++) {
    int d = x[i] - '0';
    int inv = 9 - d;

    if (i == 0 && inv == 0)
      continue;
    x[i]= char('0' + min(d, inv));
  }
  cout << x;
}
