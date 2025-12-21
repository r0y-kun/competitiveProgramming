#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, x; cin >> r >> x;
  if (x==1){
    if (r>1599 && r<3000) cout << "Yes";
    else cout << "No";
  } else if (x==2) {
    if (r>1199 && r<2400) cout << "Yes";
    else cout << "No";
  }
}
