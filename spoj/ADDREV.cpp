#include <bits/stdc++.h>
using namespace std;


string reverseString(string s){
  reverse(s.begin(), s.end());
  return s;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  while(n--){
    string a, b;
    cin >> a >> b;

    a = reverseString(a);
    b = reverseString(b);

    long long num1 = stoi(a);
    long long num2 = stoi(b);
    long long sum = num1 + num2;

    string result = to_string(sum);
    result=reverseString(result);

    int start = 0;
    while(start < result.size() - 1 && result[start] == '0'){
      start++;
    }
    result = result.substr(start);

    cout << result << "\n";
  }

  return 0;
}
