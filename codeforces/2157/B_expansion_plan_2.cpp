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
        string s;
        int n,x,y;
        cin>>n>>x>>y>>s;
        int a = 0;int b = 0;
        x= abs(x);y = abs(y);
        for(char x:s){
            if(x == '4'){
                a++;
            }
            if(x == '8'){
                b++;
            }
        }
        if(a+2*b < x+y){
            cout<<no;
            return;
        }else if(a + b < max(x,y)){
            cout<<no;
            return;
        }
        cout<<yes;
        return;
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