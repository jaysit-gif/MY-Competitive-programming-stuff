#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;
typedef long long ll;

class Solution{
    public:
    void solve(){
        int n,m,a;cin>>n>>m;
        vi v;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        ll s = 0;
        sort(v.rbegin(),v.rend());
        FOR(i,0,n){
            s += 1ll*v[i]*max(0,m-i);
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