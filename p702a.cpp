// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    if (n == 0) {  
        cout << 0 << '\n';
        return 0;
    }
    
    int ans = 1;
    int cur_increases = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i-1] < v[i]) {
            ++cur_increases;
        } else {
            ans = max(ans, cur_increases + 1);  
            cur_increases = 0;  
        }
    }
    ans = max(ans, cur_increases + 1);  
    cout << ans << '\n';
    
    return 0;
}