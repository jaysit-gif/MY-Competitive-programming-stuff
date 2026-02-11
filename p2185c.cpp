// https://codeforces.com/problemset/problem/2185/C

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
        int n;cin>>n;
        vi v(n);
        FOR(i,0,n){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        n = v.size();
        int b = 0;int c = 0;
        FOR(i,0,n){
            if(i == 0 || v[i] != v[i-1]+1){
                c = 0;
            }
            c++;
            b = max(b,c);
        }
        cout<<b<<nl;
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