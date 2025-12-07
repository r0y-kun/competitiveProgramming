#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int totalDrink = k*l;
  int totalSlices = c*d;
  int toasts = totalDrink/nl;
  int enoughSalt = p/np;

  int ot = min({toasts, totalSlices, enoughSalt})/n;

  cout << ot;
}
