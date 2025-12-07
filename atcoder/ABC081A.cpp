#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;

  int ot=0;
  for (int i = 0; i < s.size(); i++) {
    if(s[i] == '1'){
      ot += 1;
    }
  }
  cout << ot;
}
