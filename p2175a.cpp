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
        si s;
        int n,a;
        cin>>n;
        while(n--){
            cin>>a;
            s.insert(a);
        }
        for(int x:s){
            if(x>= s.size()){
                cout<<x<<nl;
                return ;
            }
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