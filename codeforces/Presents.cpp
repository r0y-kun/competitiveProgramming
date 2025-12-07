#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result(n+1);

    for(int i = 1; i <= n; i++) {
        int r;
        cin >> r;
        result[r] = i;
    }

    for(int i = 1; i <= n; i++) cout << result[i] << " ";
}
