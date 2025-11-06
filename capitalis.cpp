#include <iostream>
using namespace std;

char cpa(char a){
    int k = (int)a;
    if(k >= 97){
        k = k-32;
        return (char)k; 
    }
    return a;
}

int main(){
    string a;
    cin>>a;
    a[0] = cpa(a[0]);
    cout<<a;
    return 0;
}