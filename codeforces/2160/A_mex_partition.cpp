//codeforces.com/problemset/problem/2160/A

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
        int n,s;cin>>n;
        vi v;
        FOR(i,0,n){
            cin>>s;
            v.push_back(s);
        }
        int min_sum = 0;
        sort(v.begin(),v.end());
        FOR(i,0,n){
            if(min_sum == v[i]){
                min_sum++;
            }
        }
        cout<<min_sum<<nl;
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