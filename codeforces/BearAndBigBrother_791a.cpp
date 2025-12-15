#include <bits/stdc++.h>
using namespace std;


int main(){
  int a, b; cin >> a >> b;

  int yrs=0;
  for (int i = 0; a<=b; i++) {
    a = 3*a;
    b = 2*b;
    yrs++;
  }
  cout << yrs;
}
