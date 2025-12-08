#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  cin >> n;

  int cnt = 0;
  for (char c : n) {
    if (c == '4' || c == '7') cnt++;
  }

  bool lck = (cnt > 0);
  while (cnt > 0) {
    int digit = cnt % 10;
    if (digit != 4 && digit != 7) lck = false;
    cnt /= 10;
  }

  cout << (lck ? "YES" : "NO");
}
