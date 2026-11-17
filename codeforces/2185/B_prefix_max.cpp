#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<long long> vl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;
typedef long long ll;
#define el endl;
#define r return

class Solution{
    public:
    void solve(){
        int n,a;cin>>n;
        vi v;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        auto max = *max_element(v.begin(),v.end());
        cout<<max*n<<nl;
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