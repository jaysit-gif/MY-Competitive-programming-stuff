#include <iostream>

int cal_c(int limak,int bob){
    int i = 0;
    while(1){
        limak = 3* limak;
        bob = 2*bob;
        i++;
        if(limak>bob){
            break;
        }
    }
    return i;
}

int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<cal_c(a,b)<<'\n';
    return 0;
}