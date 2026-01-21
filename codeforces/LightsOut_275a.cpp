#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int v[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> v[i][j];
    }
  }

  for (int k = 0; k < 3; k++) {
    for (int l = 0; l < 3; l++) {
      int n=v[k][l];

      if (k>0) n += v[k-1][l];
      if (k<2) n += v[k+1][l];
      if (l>0) n += v[k][l-1];
      if (l<2) n += v[k][l+1];

      cout << (n%2==0 ? 1 : 0);
    }
    cout << '\n';
  }
  return 0;
}
