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

class Solution{
    bool comp(int a,char b,int c){
        bool t = true;
        if(b == '='){
            t = a == b;
        }else if(b == '>'){
            t = a>b;
        }else if(b == '<'){
            t = a<b;
        }
        return t;
    }
    public:
    void solve(){
        int a,c;char b;
        cin>>a>>b>>c;
        char v[3] = {'=','<','>'};int i = 0;
        while(!comp(a,b,c)){
            b = v[i];
            i++;
        }
        cout<<a<<b<<c<<nl;
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