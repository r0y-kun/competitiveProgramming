#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    n -= 1;
    int cnt=0;
    while(n--){
      int c; cin >> c;
      cnt += c;
    }
    cout << -cnt << endl;
  }
  return 0;
}
