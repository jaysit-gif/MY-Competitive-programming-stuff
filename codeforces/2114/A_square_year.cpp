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
        int a;
        cin>>a;
        int sq = ceil(sqrt(a));
        if(sq*sq == a){
            cout<<0<<' '<<sq<<nl;
        }else{
            cout<<-1<<nl;
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