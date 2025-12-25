// https://codeforces.com/problemset/problem/2102/B

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
    int median(vi v){
        int c = v.size();
        return v[c/2];
    }
    void solve(){
        vi v;
        int n,a;
        cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        FOR(i,0,v.size()){
            v[i] = abs(v[i]);
        }
        if(v[0] <= median(v)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
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


