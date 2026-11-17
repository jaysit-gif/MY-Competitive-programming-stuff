#include <iostream>
#include <vector>

int rema(int a){
    if(a <= 5){
        return 1;
    }else{
        int k = a % 5;
        if(k == 0) return a/5;
        return a/5 + rema(k);
    }
}

int main(){
    int a;
    std::cin>>a;
    std::cout<<rema(a)<<'\n';
    return 0;
}
