#include <iostream>
#include <vector>
using namespace std;

int ret_index(vector<int> v){
    int k = 0;
    for(int i= 0;i<v.size()-1;i++){
        if(v[i] != v[i+1]){
            k = i+1;
        }
    }
    return k;
}

int main(){
    vector<vector<int>> v;
    int N,n,a;cin>>N;
    for(int i = 0;i<N;i++){
        cin>>n;
        vector<int> t;
        for(int j = 0;j<n;j++){
            cin>>a;
            t.push_back(a);
        }
        v.push_back(t);
    }
    for(int i = 0;i<N;i++){
        cout<<ret_index(v[i])<<'\n';
    }
    return 0;
}