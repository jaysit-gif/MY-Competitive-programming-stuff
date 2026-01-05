//codeforces.com/problemset/problem/2131/Ahttps://codeforces.com/problemset/problem/2131/A
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull usigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i,a,b) for(size_t i = 0;i<b;i++)
typedef set<int> si;

class Solution{
    public:
    void solve(){
        int iter = 1;
        int n;cin>>n;
        vi a,b;int s,d;
        FOR(i,0,n){
            cin>>s;
            a.push_back(s);
        }
        FOR(i,0,n){
            cin>>d;
            b.push_back(d);
        }
        FOR(i,0,n){
            if(a[i] >b[i]){
                iter += a[i] - b[i];
            } 
        }
        cout<<iter<<nl;
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