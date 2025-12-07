#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    
    if(mx == mn) {
        cout << 0 << '\n';
        return 0;
    }
    
    int ans = 1e9;
    for(int i = 0; i < n; i++) {
        if(a[i] == mx) {
            for(int j = 0; j < n; j++) {
                if(a[j] == mn && i != j) {
                    int cost = i + (n - 1 - j);
                    if(i > j) cost--;
                    ans = min(ans, cost);
                }
            }
        }
    }
    cout << ans << '\n';
}
