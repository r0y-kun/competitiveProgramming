#include <bits/stdc++.h>
using namespace std;

int main(){
  string n; cin >> n;

  int cnt=0;
  for (int i = 0; i < n.size(); i++) {
    int a = n[i] - '0';
    cnt += a;
  }
  if (stoi(n)%cnt==0) cout << "Yes";
  else cout << "No";
}
