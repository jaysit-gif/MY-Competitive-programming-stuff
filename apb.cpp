#include <iostream>
#include <vector>
using namespace std;

vector<int> digi(int a){
    vector<int> v;
    while(a != 0){
        int  y = a%10;
        v.push_back(y);
        a = a/10;
    }
    return v;
}

int ssum(vector<int> v){
    int k = 0;
    for(int i = 0;i<v.size();i++){
        k += v[i];
    }
    return k;
}

int main(){
    int N,a;
    vector<int> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a;
        v.push_back(ssum(digi(a)));
    }
    for(int i = 0;i<N;i++){
        cout<<v[i]<<'\n';
    }
    return 0;
}