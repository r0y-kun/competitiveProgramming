#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
  if (x<=1) return false;
  for (int i = 2; i*i <= x; i++) {
    if (x%i==0) return false;
  }
  return true;
}

int nextPrime(int n){
  n++;
  while (!isPrime(n)) {
    n++;
  }
  return n;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;

  if (m==nextPrime(n)) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
