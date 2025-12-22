#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, k; cin >> a >> b >> c >> k;
  int cnt=0;

  int one = min(a, k);
  cnt += one;
  k -= one;

  int zero = min(b, k);
  k -= zero;

  int minus = min(c, k);
  cnt -= minus;

  cout << cnt;
}
