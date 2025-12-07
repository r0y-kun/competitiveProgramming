#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<string>S(N);
  for(int i=0;i<N;i++)cin >> S[i];

  set<vector<string>>grid_set;
  for(int i=0;i<N-M+1;i++)for(int j=0;j<N-M+1;j++){
    vector<string>grid;
    for(int ii=i;ii<i+M;ii++)grid.push_back(S[ii].substr(j,M));
    grid_set.insert(grid);
  }

  cout << grid_set.size() << endl;
}

