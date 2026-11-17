#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> v){
    int m = v[0];
    for(int i = 0;i<v.size();i++){
        if(m < v[i]){
            m = v[i];
        }
    }
    return m;
}

int main(){
    int capacity = 0;int exit;int enter;int N;
    vector<int> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>exit>>enter;
        capacity = capacity - exit + enter;
        v.push_back(capacity);
    }
    int maxi = max(v);
    cout<<maxi;
    return 0;
}