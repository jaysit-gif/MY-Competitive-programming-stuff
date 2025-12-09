#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

class Solution{
    public:
    int solve(int a){
        int C = 0;
        if(a%2 != 0){
            return 0;
        }
        C = floor(a/4) + 1;
        return C;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,a;
    Solution b;
    cin>>N;
    while(N--){
        cin>>a;
        cout<<b.solve(a)<<'\n';
    }
    return 0;
}