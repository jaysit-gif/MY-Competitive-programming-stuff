#include<iostream>
#include<string>
#include <vector>
using namespace std;

string monocarp(int a,int b,int c){
    int abc = a+b+c;
    int k = abc/3;
    if((abc % 3 == 0) && (k >= a) && (k >= b) && (c - k >= 1)){
        return "YES";
    }
    return "NO";
}

int main(){
    int N,a,b,c;vector<string> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a>>b>>c;
        v.push_back(monocarp(a,b,c));
    }
    for(int i = 0;i<N;i++){
        cout<<v[i]<<'\n';
    }
    return 0; 
}