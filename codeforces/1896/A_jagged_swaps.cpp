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

#define yes "Yes\n"
#define no "No\n"

class Solution{
    public:
    void solve(){
        int n,a;
        vi v;
        cin>>n;
        FOR(i,0,n){
            cin>>a;
            v.push_back(a);
        }
        if(v[0]==1){
            cout<<yes;
        }else{
            cout<<no;
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