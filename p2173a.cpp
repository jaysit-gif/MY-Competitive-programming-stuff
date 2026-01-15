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
        string s;
        int n,k,last,ans;
        cin>>n>>k>>s;
        last = INT32_MIN;ans = 0;
        FOR(i,0,n){
            if(s[i] == '1'){
                last = i;
            }
            if(s[i] == '0'){
                if(i > last + k){
                    ans++;
                }
            }
        }
        cout<<ans<<nl;
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