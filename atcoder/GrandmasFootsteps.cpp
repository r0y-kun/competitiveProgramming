#include <bits/stdc++.h>
using namespace std;

int main(){
  int s, a, b, x;
  cin >> s >> a >> b >> x;
  
  int k=0;
  k += (x/(a+b)) * a;
  k += min(x%(a+b), a);

  int ans = k * s;

  cout << ans;
}
