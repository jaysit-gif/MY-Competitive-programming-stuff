#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
typedef vector<int> vi;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;

class Solution{
    public:
    int mini(vi v){
        int start = *v.begin();int end = *(v.end() - 1);
        return abs(start - end);
    }
    vi fill(vi v){
        int start = *v.begin();int end = *(v.end()-1);
        if(*v.begin() == -1){
            *v.begin() = end;
        }
        if(*(v.end()-1) == -1){
            *(v.end()-1) = start;
        }
        if(*v.begin() == -1 && *(v.end()-1) == -1){
            *v.begin() = 0; *(v.end()-1) = 0;
        }
        FOR(i,1,v.size()-1){
            if(v[i] ==-1){
                v[i] = 0;
            }
        }
        return v;
    }
    void solve(){
        vi v;
        int N,a;cin>>N;
        FOR(i,0,N){
            cin>>a;
            v.push_back(a);
        }
        v = fill(v);
        cout<<mini(v)<<nl;
        for(int x: v){
            cout<<x<<' ';
        }
        cout<<nl;
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