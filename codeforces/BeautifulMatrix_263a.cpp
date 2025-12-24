#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int indi, indj;
  int mx[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> mx[i][j];
      if ((mx[i][j]) == 1) indi=i, indj=j;
    }
  }
  if (indi==2 && indj==2) cout << 0;
  else cout << abs(indi-2) + abs(indj-2);
  return 0;
}
