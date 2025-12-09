#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int result=0;
  for (int i = 1; i < n+1; i++) {
    result = result + (pow(-1, i) * pow(i, 3));
  }
  cout << result;
}
