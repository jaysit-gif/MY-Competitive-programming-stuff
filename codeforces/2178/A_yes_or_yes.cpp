#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull usigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;

class Solution{
    public:
    void solve(){
        string s;
        cin>>s;
        int yc = count(s.begin(),s.end(),'Y');
        if(yc>1){
            cout<<"NO"<<nl;
        }else{
            cout<<"YES"<<nl;
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