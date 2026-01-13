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
        int n;cin>>n;
        if(n<=3){
            if(n == 2)cout<<2<<nl;
            if(n == 3)cout<<3<<nl;
            return;
        }
        cout<<n%2<<nl;
        return;
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