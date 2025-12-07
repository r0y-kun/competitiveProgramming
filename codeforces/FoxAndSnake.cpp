#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (i%2 != 0) {
      if (count == 0) {
       cout << string(m-1, '.') << '#' <<'\n';
       count += 1;
      } else if (count == 1) {
        cout << '#' << string(m-1, '.') <<'\n';
        count -= 1;
      }
    }else {
      cout << string(m, '#') << '\n'; 
    }
  }
}
