//codeforces.com/problemset/problem/2180/A

#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;

class Solution{
    public:
    void solve(){
        vi s;
        int l,a,b;
        cin>>l>>a>>b;
        int mx = a;
        FOR(i,0,l){
            a = (a+b)%l;
            mx = max(mx,a);
        }
        cout<<mx<<nl;
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