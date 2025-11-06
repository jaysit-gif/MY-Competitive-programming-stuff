#include <iostream>

int tanya_algo(int a,int b){
    while(b != 0){
        if(a % 10 != 0){
            a -= 1;
        }else{
            a /= 10;
        }
        b--;
    }
    return a;
}

int main(){
    int a,b;
    std::cin>>a>>b;
    std::cout<<tanya_algo(a,b);
    return 0;
}