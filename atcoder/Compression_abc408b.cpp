#include <bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;

  vector<int> v(n);
  for (int &i : v) cin >> i;

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  cout << v.size() << "\n";
  for (int j=0; j<v.size(); ++j) cout << v[j] << " ";
}
