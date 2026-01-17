#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  vector<int> v(n);
  for (int a : v) cin >> a;

  int i=3;
  while (true){
    if (v[i]==v[i-1] && v[i]==v[i-2] && v[i]==v[i-3]){
      v.erase(v.begin()+i);
      v.erase(v.begin()+(i-1));
      v.erase(v.begin()+(i-2));
      v.erase(v.begin()+(i-3));
    }
  }
  cout << v.size() << "\n";
  return 0;
}
