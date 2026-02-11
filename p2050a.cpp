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
        int n,m;
        string s;
        cin>>n>>m;
        vector<string> v;
        FOR(i,0,n){
            cin>>s;
            v.push_back(s);
        }
        int l = 0;
        FOR(i,0,n){    
            if(v[i].size() <= m){
                l++;
                m -= v[i].size();
            }else{
                break;
            }
        }
        cout<<l<<nl;
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