// https://codeforces.com/contest/2184/problem/B

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
#define r return

class Solution{
    public:
    void solve(){
        int s,k,m;
        cin>>s>>k>>m;
        if(k>=s){
            cout<<max(0,s - m%k)<<nl;
        }else{
            m %= 2*k;
            if(m<k){
                cout<<s-m<<nl;
            }else{
                cout<<2*k -m<<nl;
            }
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