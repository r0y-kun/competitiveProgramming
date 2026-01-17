#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    bool val=true;
    vector<int> v(n);
    for (int i=0; i<n; i++){
      cin >> v[i];
    }

    for (int j=1; j<n; j++){
      if (((v[j]%2 != 0) && (v[j-1]%2 != 0)) || ((v[j]%2 == 0) && (v[j-1]%2 == 0))) val=false;
    }
    if (val==false) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
