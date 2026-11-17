// https://codeforces.com/problemset/problem/2106/A

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;
typedef long long ll;
#define el endl;
#define r return

class Solution{
    public:
    void solve(){
        int n;string s;cin>>n>>s;
        int k = 0;char m;
        FOR(i,0,n){
            m = s[i];
            s[i] == '0' ? s[i] = '1':s[i] = '0';
            k += count(s.begin(),s.end(),'1');
            s[i] = m;
        }
        cout<<k<<nl;
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