#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int pt=0;
    for (int i = 1; i <= 10; i++) {
      char c;
      for (int j = 1; j <= 10; j++) {
        cin >> c;
        if (c=='X'){
          if (i==1 || j==1 || j==10 || i==10) pt += 1;
          else if (i==2 || j==2 || j==10-1 || i==10-1) pt += 2;
          else if (i==3 || j==3 || j==10-2 || i==10-2) pt += 3;
          else if (i==4 || j==4 || j==10-3 || i==10-3) pt += 4;
          else if (i==5 || j==5 || j==10-4 || i==10-4) pt += 5;
        }
      }
    }
    cout << pt << endl;
  }
  return 0;
}
