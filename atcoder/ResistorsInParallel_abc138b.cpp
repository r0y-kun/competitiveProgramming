#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  float a = 0;

  for (int i = 0; i < n; i++) {
    float ai; cin >> ai;
    a += 1/ai;
  }
  cout << 1/a;
}
