#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int solve(vector<int> v,int N){
        int max = v[0];int min = v[0];int count = 0;
        for(int i = 0;i<N;i++){
            if(v[i] < max){
                max = v[i];
                count++;
            }
            if(v[i]>min){
                min = v[i];
                count++;
            }
        }
        return count;
    }
};

int main(){
    int N;vector<int> v;int a;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    cout<<s.solve(v,N);
    return 0;
}