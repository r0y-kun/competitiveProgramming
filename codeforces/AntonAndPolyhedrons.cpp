#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int result=0;
  for (int i = 0; i < n; i++) {
    string val;
    cin >> val;

    if (val == "Icosahedron"){
      result += 20;
    } else if (val == "Dodecahedron") {
      result += 12;
    } else if (val == "Octahedron") {
      result += 8;
    } else if (val == "Cube") {
      result += 6;
    } else if (val == "Tetrahedron") {
      result += 4;
    }
  }

  cout << result;
}
