#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y, z;
  cin >> x >> y >> z;

  long long numer = (long long)x - (long long)z * y;
  long long denom =  z-1;

  if(denom == 0){
    cout << "No" << endl;
    return 0;
  }
  if(numer>=0 && numer % denom == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
