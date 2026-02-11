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
        vector<ll> v;
        int n,c;
        ll k,a;
        cin>>n>>c;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        k = 0;
        FOR(i,0,n){
            if(v[i] *(1LL << k)<=c){
                k++;
            }
        }
        cout<<n-k<<nl;
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