#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    string x; cin >> x;
    string s; cin >> s;

    bool psble=false;
    int cnt=0;
    while (x.size() <= 2*m+n){
      if (x.find(s) != string::npos){
        psble=true;
        break;
      }
      x += x;
      cnt++;
    }
    if (psble) cout << cnt << "\n";
    else cout << -1 << "\n";
  }
  return 0;
}
