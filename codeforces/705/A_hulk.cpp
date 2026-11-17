#include <iostream>
using namespace std;

std::string hulk(int n){
    std::string s = "I hate";
    if(n % 2 == 0){
        s = "I love";
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<hulk(i)<<' ';
        if(i != n){
            cout<<"that ";
        }else{
            cout<<"it ";
        }
    }
    return 0;
}