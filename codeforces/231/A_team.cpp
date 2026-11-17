#include <iostream>
#include <vector>
using namespace std;

int attempt_prob(vector<int> v){
    int k = 0;
    for(int i = 0;i<3;i++){
        if(v[i] == 1){
            k++;
        }
    }
    if(k >= 2){
        return 1;
    }
    return 0;
}


int print_2d(vector<vector<int>> v,int N){
    int np = 0;
    for(int i = 0;i<N;i++){  
        np += attempt_prob(v[i]);
    }
    return np;
} 

int main(){
    vector<vector<int>>v;
    int N,a;
    cin>>N;
    v.resize(N);
    for(int i = 0;i<N;i++){
        for(int j = 0;j<3;j++){
            cin>>a;
            v[i].push_back(a);
        }
    }
    cout<<print_2d(v,N);
    return 0;
}
