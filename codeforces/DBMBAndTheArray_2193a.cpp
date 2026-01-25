#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, s, x; cin >> n >> s >> x;

    int val=0;
    for (int i=0; i<n; i++){
      int v; cin >> v;
      val+=v;
    }

    bool b=true;
    while (b) {
      if (val==s || val > s){
        b=false;
        break;
      }
      val += x;
    }

    if (val==s) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
