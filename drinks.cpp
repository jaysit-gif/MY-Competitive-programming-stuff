#include<iostream>
#include <vector>
using namespace std;

float fraction_calc(int N , vector<float> v){
    float k = 0.0;
    for(int i = 0;i<N;i++){
        k += v[i]/100.0;
    }
    return k/(float)N;
}

int main(){
    int N;
    cin>>N;
    float f;
    vector<float> v;
    for(int i = 0;i<N;i++){
        cin>>f;
        v.push_back(f);
    }
    cout<<fraction_calc(N,v) * 100;
    return 0;
}
