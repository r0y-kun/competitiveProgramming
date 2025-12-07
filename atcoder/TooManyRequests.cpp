#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    if (m>i) {
      cout << "OK" << "\n";
    } else {
      cout << "Too Many Requests" << "\n";
    }
  }
}
