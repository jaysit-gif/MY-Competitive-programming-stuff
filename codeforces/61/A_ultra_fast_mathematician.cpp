#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> adder(vector<int> a,size_t va,vector<int> b){
    vector<int> c;
    for(int i = 0;i<va;i++){
        if(a[i] != b[i]){
            c.push_back(1);
        }else{
            c.push_back(0);
        }
    }
    return c;
}

int main(){
    std::string a,b;
    std::vector<int> va,vb,vc;  /*v*/
    std::cin>>a;
    std::cin>>b;
    size_t x = strlen(a.c_str());
    for(int i = 0;i<strlen(a.c_str());i++){
        int z = (int)a[i];
        va.push_back(z);
    }
    for(int i = 0;i<x;i++){
        int z1 = (int)b[i];
        vb.push_back(z1);
    }
    vc = adder(va,x,vb);
    for(int i = 0;i<x;i++){
        cout<<vc[i];
    }
    return 0;
}