#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> x;
  (count(a.begin(), a.end(), x)) ? cout << "Yes" : cout << "No";
}
