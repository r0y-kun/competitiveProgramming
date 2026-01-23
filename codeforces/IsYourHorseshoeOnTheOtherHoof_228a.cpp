#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  set<int> v;
  for (int i=0; i<4; i++){
    int x;
    cin >> x;
    v.insert(x);
  }

  cout << 4-v.size() << "\n";
  return 0;
}
