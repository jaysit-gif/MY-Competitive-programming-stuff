#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull usigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i,a,b) for(size_t i = 0;i<b;i++)
typedef set<int> si;

class Solution{
    public:
    void solve(){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int s = a+b+c;
        int k = (n/s)*3;
        if(n % s == 0){
            cout<<k<<nl;
        }else if(n % s <= a){
            cout<<k+1<<nl;
        }else if(n % s <= a+b){
            cout<<k+2<<nl;
        }else{
            cout<<k+3<<nl;
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