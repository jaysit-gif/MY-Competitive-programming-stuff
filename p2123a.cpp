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

#define alice "ALICE\n"
#define bob "BOB\n"

class Solution{
    public:
    void solve(){
        int n;cin>>n;
        if(n%4 == 0){
            cout<<bob;
            return ;
        }
        cout<<alice;
        return ;
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