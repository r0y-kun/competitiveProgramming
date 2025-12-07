#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int ot = 0;
  for (int i = 0; i < n; i++) {
    ot = ot+i;
  }

  cout << ot+n;
}
