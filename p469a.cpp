#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
typedef vector<int> vi;
typedef set<int> si;
#define guy "I become the guy."
#define keyb "Oh, my keyboard!"
#define FOR(i, a, b) for (int i=a; i<(b); i++)

class Solution{
    public:
    si setmaker(int N){
        si s;
        FOR(i,1,N+1){
            s.insert(i);
        }
        return s;
    }
    si apb(si a,si b){
        si s;
        for(int x:a){
            s.insert(x);
        }
        for(int x:b){
            s.insert(x);
        }
        return s;
    }
    void solve(){
        si x,y,z;
        int N,a,b,c;
        cin>>N;
        si s = setmaker(N);
        cin>>a;
        FOR(i,0,a){
            cin>>c;
            x.insert(c);
        }
        cin>>b;
        FOR(i,0,b){
            cin>>c;
            y.insert(c);
        }
        z = apb(x,y);
        //sort(z.begin(),z.end());
        if(s == z){
            cout<<guy;
        }else{
            cout<<keyb;
        }
    }  
}; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    int N = 1;
    //cin>>N;
    while(N--){
        s.solve();
    }
    return 0;
}