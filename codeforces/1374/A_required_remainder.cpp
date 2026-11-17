#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(int x,int y,int n){
        int q = n - n % x + y;
        int p = n - n%x -(x - y);
        if(q <= n){
            cout<<q<<'\n';
        }else{
            cout<<p<<'\n';
        }
    }
};

int main(){
    //Solution b;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution b;
    int x,y,n;
    int N;
    cin>>N;
    while(N--){
        cin>>x>>y>>n;
        b.solve(x,y,n);
    }
   //b.solve(7,5,12345);
    return 0;
}