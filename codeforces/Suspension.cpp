#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  vector<int> players(t);
  vector<int> result(t);
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int y, r;
    cin >> y >> r;
    int out = (y/2)+r;
    if(out>n){
      result[i] = n;
    }else {
      result[i] = out;
    }
  }

  for (int j = 0; j < t; j++) {
    cout << result[j] << "\n";
  }
}
