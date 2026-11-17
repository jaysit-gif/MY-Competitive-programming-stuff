#include <iostream>
#include <cmath>
using namespace std;

int fashion_wear(int red_socks,int blue_socks){
    if((blue_socks>red_socks)){
        return red_socks;
    }
    return blue_socks;
}

int main(){
    int blue_socks;int red_socks;
    cin>>red_socks>>blue_socks;
    cout<<fashion_wear(red_socks,blue_socks)<<' '<<abs(red_socks - blue_socks)/2;
    return 0;
}
