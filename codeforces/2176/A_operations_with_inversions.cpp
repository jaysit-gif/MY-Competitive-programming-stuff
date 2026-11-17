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
        vi v;int n,a;
        cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        int m = 0;int c = 0;

        FOR(i,0,n){
            m = max(m,v[i]);
            if(m == v[i]){
                c++;
            }
        }
        cout<<n-c<<nl;
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