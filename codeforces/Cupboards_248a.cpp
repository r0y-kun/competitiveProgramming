#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  int lc=0, lo=0, rc=0, ro=0;
  for (int i = 0; i < n; i++) {
    int l, r; cin >> l >> r;
    if (l==1) lc++;
    else lo++;

    if (r==1) rc++;
    else ro++;
  }
  int lfinal, rfinal;
  if (lc>lo) lfinal=lo;
  else lfinal=lc;

  if (rc>ro) rfinal=ro;
  else rfinal=rc;

  cout << lfinal+rfinal << "\n";
  return 0;
}
