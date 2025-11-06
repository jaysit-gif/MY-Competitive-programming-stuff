#include <iostream>
#include <vector>
using namespace std;

string color_status(vector<char> v){
    for(int i = 0;i<v.size();i++){
        if((v[i] == 'C') || (v[i] == 'Y') || (v[i] == 'M') || (v[i] == 'G')){
            return "#Color";
        }
    }//whats wrong with this function
    return "#Black&White";
}

int main(){
    int a,b;
    cin>>a>>b;
    char a1;vector<char> v;
    for(int i = 0;i<a*b;i++){
       cin>>a1;
       v.push_back(a1);
    }
    cout<<color_status(v);
    return 0;
}