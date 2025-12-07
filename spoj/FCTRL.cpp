#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--) {
    long long n, ans=0;
    cin >> n;
    for (long long i = 5; n/i >= 1; i *= 5)
      ans += n/i;
    cout << ans << '\n';
  }
}
