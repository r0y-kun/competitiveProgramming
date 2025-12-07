#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, n, q;
  cin >> x;
  cin >> n;

  vector<int> v(n+1);
  for (int i = 1; i<=n; i++) cin >> v[i];

  cin >> q;

  vector<int> p(q);
  for (int j=0; j<q; j++) cin >> p[j];

  vector<bool> attached(n+1, false);

  for (int k=0; k<q; k++){
    int id = p[k];

    if (!attached[id]) {
      attached[id] = true;
      x += v[id];
    } else {
      attached[id] = false;
      x -= v[id];
    }
    cout <<x<<"\n";
  }
}
