#include<iostream>
#include<vector>
using namespace std;
struct pinfo{
    int index;
    int val;
};

int main(){
    vector<int> v_a;
    int N,a;
    pinfo X;
    cin>>N;
    v_a.resize(N);
    for(int i = 0;i<N;i++){
        X.index = i+1;
        cin>>a;
        X.val = a;
        v_a[X.val-1] = X.index;
    }
    for(int i = 0;i<N;i++){
        cout<<v_a[i]<<' ';
    }
    return 0;
}