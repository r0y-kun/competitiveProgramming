#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;

  vector<int> digits;

  while(x>0){
    digits.push_back(x%10);
    x /= 10;
  }

  int smallest = *min_element(digits.begin(), digits.end());
  int s = digits.size();

  string ot(s, char('0' + smallest));
  int result = stoi(ot);

  cout << result;
}
