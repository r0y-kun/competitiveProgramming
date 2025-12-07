#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  int r=0;

  vector<int> players(n);
  for(int i = 0; i<n; ++i){
    cin >> players[i];

    if (players[i] > 0 && players[i] >= players[k-1]){
      r += 1;
    }
  }

  cout << r;
}
