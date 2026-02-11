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

#define yes "Yes\n"
#define no "No\n"

class Solution{
    public:
    void solve(){
       int n,a;cin>>n;
       vi v;
       FOR(i,0,n){
          cin>>a;
          v.push_back(a);
       }
       int c = 0;
       FOR(i,0,n){
        if(v[i]%2 != (i+1)%2){
            c++;
        }
       }
       if(c == 0 || c == n){
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