#include <iostream>
#include <vector>
using namespace std;

int iter_collatz(int k,int a){
    while(k != 0){\
    if(a % 2 == 0){
        a = a/2;
    }else{
        a = 3*a + 1;
    }
    k--;
  }
   return a;
}

int main(void){
    int N,x,y;
    cin>>N;
    vector<int> vx,vy;
    for(int i = 0;i<N;i++){
        cin>>x>>y;
        vx.push_back(x);
        vy.push_back(y);
    }
    for(int i = 0;i<N;i++){
        cout<<iter_collatz(vx[i],vy[i])<<'\n';
    }
    return 0;
} 