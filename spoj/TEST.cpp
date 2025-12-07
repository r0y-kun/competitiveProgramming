#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> n;
  int x;

  while (cin >> x && x != 42){
    n.push_back(x);
  }

  for (int i:n){
    cout << i << endl;
  }
}
