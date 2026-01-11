#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define fr(n) for(int i = 0;i<n;i++)
typedef set<int> si;
typedef long long ll;

class Solution{
    public:
    void solve(){
        int n;cin>>n;
        ll a[n];
        fr(n) cin >> a[i];
        ll sum = 0;

        ll s = min(sum - abs(a[1]-a[0]), sum - abs(a[n-1]-a[n-2]));
        FOR(i,1,n){
            s = min(s, sum - abs(a[i+1]-a[i]) - abs(a[i]-a[i-1]) + abs(a[i+1]-a[i-1]));
        }
        cout<<s<<nl;
    }
}; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    int N = 1;
    cin>>N;
    while(N--){
        s.solve();
    }
    return 0;
}