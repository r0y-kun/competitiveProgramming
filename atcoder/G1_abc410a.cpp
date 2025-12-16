#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  vector<int> v(n);
  for (auto &nx : v) {
    cin >> nx;
  }
  int k; cin >> k;

  int ans=0;
  for (auto &nx : v) {
    if(k<=nx) ans++;
  }
  cout << ans;
}
