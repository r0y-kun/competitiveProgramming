#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, k; cin >> n >> k;

  long long cnt=1;
  long long limit=1;
  for (int i = 0; i < k; i++) limit *= 10;

  for (int i = 0; i < n; i++) {
    long long a; cin >> a;
    
    if (cnt >= limit || cnt >(limit-1)/a) {
      cnt = 1;
    } else {
      cnt *= a;
    }
  }
  cout << cnt;
}
