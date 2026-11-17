#include <iostream>
using namespace std;

int noofcandies(int a){
    int b = a%3;
    if(b == 0){
        return 0;
    }
    b = 3 - b;
    return b;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int a;
        cin>>a;
        cout<<noofcandies(a)<<'\n';
    }
    return 0;
}