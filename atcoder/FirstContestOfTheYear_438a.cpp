#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int d, f; cin >> d >> f;
  for (int i=0; f<d; i++) {
    f += 7;
  }
  cout << f-d;
  return 0;
}
