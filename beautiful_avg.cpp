#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int avg_array(vector<int> v,int small,int big){
        int s =0; int j = big - small +1;
        for(int i = small; i<=big;i++){
            s += v[i];
        }
        int avg = s/j;
        return avg;
    }

    int max_avg(vector<int> v,int n){
        int max_avg = *max_element(v.begin(),v.end());
        return max_avg;
    }

    void solve(){
        int n,a;
        vector<int> v;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        cout<<max_avg(v,n)<<'\n';
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    int N;
    cin>>N;
    while(N--){
        s.solve();
    }
    return 0;
}