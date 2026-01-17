#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;

  vector<bool> broken(n+1, false);
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    broken[x]=true;
  }

  vector<long long> dp(n+1, 0);
  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    if (broken[i]) {
      dp[i]=0;
    } else {
      dp[i] = dp[i-1];
      if (i>=2) dp[i] = (dp[i]+dp[i-2]) % MOD;
    }
  }

  cout << dp[n] << "\n";
  return 0;
}
