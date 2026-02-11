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

class Solution{
    public:
    void solve(){
        int n,a; cin>>n;
        vi v;bool e,o;
        e = false;o =false;
        FOR(i,0,n){
            cin>>a;
            if(a%2 == 0){
                e = true;
            }else{
                o = true;
            }
            v.push_back(a);
        }
        if(e && o){
            sort(v.begin(),v.end());
            FOR(i,0,n){
                cout<<v[i]<<' '; 
            }
            cout<<nl;
            return ;
        }
        FOR(i,0,n){
            cout<<v[i]<<' ';
        }
        cout<<nl;
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