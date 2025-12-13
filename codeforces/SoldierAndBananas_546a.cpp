#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k, n, w; cin >> k >> n >> w;

  int x=0;
  for (int i = 1; i <= w; i++) {
    x += i*k;
  }

  x>n ? cout << abs(x-n) : cout << 0;
}
