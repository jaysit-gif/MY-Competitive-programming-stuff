#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)

class Solution{
    public:
    void solve(){
        vi v;
        int n,a;
        cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int x:v){
            cout<<x<<" ";
        }
    }
}; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    int N = 1;
    //cin>>N;
    while(N--){
        s.solve();
    }
    return 0;
}