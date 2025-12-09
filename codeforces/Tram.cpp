#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int ot=0;
  int val = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    val -= a;
    val += b;
    if (ot < val) {
      ot = val;
    }
  }
  cout << ot;
}
