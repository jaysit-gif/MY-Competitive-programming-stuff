//https://codeforces.com/contest/2148/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int a,b,N;
    scanf("%d",&N);
    while(N--){
      scanf("%d %d",&a,&b);
        printf("%d\n",a*(1 & b));
    }
    return 0;
}