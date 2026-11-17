#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string say_birland(string a){
    string k;
    k.resize(a.size());
    for(int i = 0;i<a.size();i++){
        k[i] = a[a.size()-i-1];//why isnt this working
    }
    return k;
}

int main(){
    string a,k,b;
    cin>>a>>b;
    k = say_birland(a);
    if(strcmp(k.c_str(),b.c_str()) == 0){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    return 0;
}