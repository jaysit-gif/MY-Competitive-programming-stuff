#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:

    int adder(vector<int> v,int i,int j){
        if(i < j){
            if(v[i]>v[j]){
                return 1;
            }else{
                return 0;
            }
        }
        return 0;
    }


    int solver(vector<int> v,int n){
        if(n == 1){
            return 0;
        }
        int c = 0;
        for(int i = n-1;i>1;i--){
            for(int j = 0;j<i;j++){
                c += adder(v,i,j);
            }
        }
        return c;
    }
    public:
    void solve(){
        vector<int> v;
        int a,n;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        int ans = solver(v,n);
        cout<<ans<<'\n';
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution b;
    int N;
    cin>>N;
    while(N--){
        b.solve();
    }
    return 0;
}