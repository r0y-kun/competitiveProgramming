#include <bits/stdc++.h>
using namespace std;

int main(){
  string x;
  cin >> x;

  if (x[0] !='9'){
    int d = x[0] - '0';
    int inverted = 9 - d;
    if (inverted < d) x[0] = char('0' + inverted);
  }

  for (int i = 0; i < x.size(); i++) {
    int d = x[i] - '0';
    int inverted = 9 - d;
    if (inverted < d) x[i] = char('0' + inverted);
  }

  cout << x;
  return 0;
}
