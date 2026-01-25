#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;

    bool val=false;
    for (int i=0; i<n; i++){
      int a; cin >> a;
      if (a==k) val=true;
    }
    if (val==true) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
