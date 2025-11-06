#include <iostream>
#include <vector>
using namespace std;

bool is_difficult(vector <int> v,int N){
    for(int i = 0;i<N;i++){
        if(v[i] == 1){
            return true;
        }
    }
    return false;
}


int main(){
    int N,a;
    vector <int> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<(is_difficult(v,N) ? "HARD": "EASY");
    return 0;
}