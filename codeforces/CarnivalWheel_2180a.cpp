#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;

  vector<int> v(t);
  
  for (int i = 0; i < t; i++) {
    long long l, a, b; cin >> l >> a >> b;
    
    if (a+b==l) a=0;
    while (a+b<l && a<l-1) {
      a += b;
    }
    v[i] = a;
  }

  int i = 0;
  while (i<t) {
    cout << v[i] << "\n"; i++;
  }
}
