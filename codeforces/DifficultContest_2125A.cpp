#include <bits/stdc++.h>
using namespace std;

bool bad(const string &s){
  return s.find("FFT") != string::npos || s.find("NTT") != string::npos;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int cntF=0, cntT=0;
    string other = "";

    for (char c : s) {
      if (c == 'F') cntF++;
      else if (c == 'T') cntT++;
      else other += c;
    }

    string ans = other + string(cntF, 'F') + string(cntT, 'T');

    if (bad(ans) && ans.size() >= 3) {
      swap(ans[ans.size()-1], ans[ans.size()-3]);
    }

    cout<<ans<<"\n";
  }
}
