#include <iostream>
using namespace std;

class Solution{
    public:
    int function(int a,int b){
        return a*b/2;
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    Solution s;
    cout<<s.function(n,m);
    return 0;
}