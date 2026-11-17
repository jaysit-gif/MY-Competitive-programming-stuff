//codeforces.com/contest/2064/problem/A

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<long long> vl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;
typedef long long ll;
#define el endl;

class Solution{
    public:
    void solve(){
        int n,a,b;
        string s;cin>>n>>s;
        a = 0;b=0;
        FOR(i,0,n){
            if(s[i] == '1') a++;
            else b++;
        }
        if(a == 0) cout<<0<<nl;
        else if(b == 0) cout<<1<<nl;
        else{
            int c = 0;
            if(s[0] == '1'){
                c++;
            }
            FOR(i,1,n){
                if(s[i-1] !=  s[i]){
                    c++;
                }
            }
            cout<<c<<nl;
        }
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