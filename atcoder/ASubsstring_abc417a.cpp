#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b; cin >> n >> a >> b;
  string s; cin >> s;

  int strt=a;
  int end=n-b;

  for (int i = strt; i < end; i++) {
    cout << s[i];
  }
}
