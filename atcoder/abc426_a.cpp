#include <bits/stdc++.h>
using namespace std;

int main(){
  string x, y;
  cin >> x >> y;

  if (x == y) {
    printf("Yes");
  } else if (x == "Lynx"){
    printf("Yes");
  } else if (x == "Serval" && y=="Ocelot") {
    printf("Yes");
  } else {
    printf("No");
  }
}
