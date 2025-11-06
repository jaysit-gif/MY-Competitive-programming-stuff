#include <iostream>
using namespace std;

#define ll long long

ll terms(ll x){
    if(x % 2 == 0){
        return x/2;
    }
    return -(x+1)/2;
}



int main(){
    ll x;
    cin>>x;
    cout<<terms(x);
    return 0;
}