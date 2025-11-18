#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;

struct fsmax{
    int fmax,smax;
};

fsmax FSMAX(vector<int> vec){
    std::sort(vec.begin(), vec.end(), [](int a, int b) {
        return a > b; 
    });
    fsmax f;
    f.fmax = vec[0];
    f.smax = vec[1];
    return f;
}

int all_info(fsmax f,int v){
    if(v == f.fmax){
        return f.fmax - f.smax;
    }
    return v - f.fmax;
}
//this problem was accepted as a solution for 1760c on cf i want to know why it took 431ms and how to optimize it??
int main(){
    int N;
    cin>>N;
    while(N--){
        vector <int> v;
        int a,b;
        cin>>a;
        for(int i = 0;i<a;i++){
            cin>>b;
            v.push_back(b);
        }
        fsmax f = FSMAX(v);
        for(int i = 0;i<a;i++){
            cout<<all_info(f,v[i])<<'\t';
        }
        cout<<'\n';
    }
    return 0;
}