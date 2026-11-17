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
        vi v;
        int n,a;
        cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int last = *(v.end()-1);
        int ans = 0;int ans1 = 0;
        FOR(i,0,n){
            if((v[i]+last)%2==0){
                break;
            }
            ans++;
        }
        FOR(i,0,n){
            last = *(v.end()-1-i);
            if((v[0]+last)%2==0){
                break;
            }
            ans1++;
        }
        cout<<min(ans,ans1)<<nl;
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