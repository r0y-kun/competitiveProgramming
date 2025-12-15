#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;

  int a=0;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a += ai;
  }
  if (a>m) cout << "No";
  else cout << "Yes";
}
