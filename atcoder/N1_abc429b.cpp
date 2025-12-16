#include <bits/stdc++.h>
using namespace std;


int main(){
  int n, m; cin >> n >> m;

  vector<int>a(n); int k=0;
  for (auto &x : a){
    cin >> x; k += x;
  }
  int j = k-m;
  if (find(a.begin(), a.end(), j) != a.end()) cout << "Yes";
  else cout << "No";
}
