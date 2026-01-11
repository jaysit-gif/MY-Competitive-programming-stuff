#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define fr(n) for(int i = 0;i<n;i++)
typedef set<int> si;
typedef long long ll;
#define yes "YES\n"
#define no "NO\n"


class Solution{
   
    public:
    void solve(){
        vi v;
        int n,a;cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        if(accumulate(v.begin(),v.end(),0) == n){
            cout<<yes;
            return;
        }
        FOR(i,1,n){
            if(v[i-1] == 0 && v[i] == 0){
                cout<<yes;
                return ;
            }
        }
        cout<<no;
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