#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

class Solution{
    public:
    string solve(vector<int> v,int N){
        sort(v.begin(),v.end());
        string yes = "YES";
        string no = "NO";
        for(int i = 1;i<N;i++){
            if(abs(v[i]-v[i-1]) > 1){
                return no;
            }
        }
        return yes;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,n,b;
    cin>>N;
    while(N--){
        vector<int> a;
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>b;
            a.push_back(b);
        }
        Solution s;
        cout<<s.solve(a,n)<<'\n';
    }
    return 0;
}