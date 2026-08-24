#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<n<<'\t';
    while(n>1){
        if(n%2 == 0){
            n = n/2;
        }else{
            n = 3*n+1;
        }
        cout<<n<<'\t';
    }
    cout<<'\n';
    return 0;
}