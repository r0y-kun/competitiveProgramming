#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;

  vector<int> v(n);
  int cnt;
  for (int i = 0; i < n; i++) {
    cin >> v[i]; if (v[i]<m+1 && i<m+1) cnt=i;
  }
  cout << cnt-n;
}
