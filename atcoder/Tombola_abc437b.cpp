#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w, n; cin >> h >> w >> n;

  int matrix[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> matrix[i][j];
    }
  }

  vector<int> v(n);
  for (int k = 0; k < n; k++) {
    cin >> v[k];
  }

  int ans=0;
  for (int l = 0; l < h; l++) {
    int cnt=0;
    for (int m = 0; m < w; m++) {
      for (int t = 0; t < n; t++) {
        if (matrix[l][m] == v[t]){
          cnt++;
        }
      }
    }
    if (cnt>ans) ans = cnt;
  }
  cout << ans;
}
