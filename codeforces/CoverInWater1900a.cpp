#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    string s; cin >> s;

    bool val=false;
    for (int j=1; j<n-1; j++){
      if (s[j]=='.' && s[j-1]=='.' && s[j+1]=='.'){
        val=true;
      }else if (s[j]=='#'){
        j++;
      }
    }

    int cnt=0;
    for (int i=0; i<n; i++){
      if (s[i]=='.') {
        cnt++;
      }
    }
    if (val==true)cout << 2 << "\n";
    else cout << cnt << "\n";
  }
  return 0;
}
