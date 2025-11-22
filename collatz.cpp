#include <bits/stdc++.h>
using namespace std;
/*bool collatz(int a,int iterations,int c){
    int b = a;
    bool pass = true;
    while(iterations--){
        if(b%2 == 0){
            b = 2*b;
        }else{
            b = 3*b + 1;
        }
    }
    if(c != b){
        pass = false;
    }
    return pass;
}*/

int initval(int a,int b){
    int ans = -1;
    if(a <= 10 && b <= 10){
        ans = 2*pow(2,a);
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,a,b;
    cin>>N;
    //cout<<collatz(5,6,512);
    while(N--){
        cin>>a>>b;
        cout<< initval(a,b)<<'\n';
    }
    return 0;
}
