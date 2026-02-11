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
        int n;
        string s;
        cin>>n>>s;
        bool a = ((s.find("2025")) != string::npos);
        bool b = ((s.find("2026")) == string::npos);
        if(a && b){
          cout<<1<<nl;
        }else{
            cout<<0<<nl;
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