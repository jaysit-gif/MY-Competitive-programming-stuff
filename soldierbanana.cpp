#include <iostream>

int money_needed(int k,int w){
    int cost = k*(w*(w+1)/2);
    return cost;
}    

int loan(int k,int n,int w){
    int cost = money_needed(k,w);
    if(n - cost>0){
        return 0;
    }
    return cost - n;
}

int main(){
    int k,n,w;
    std::cin>>k>>n>>w;
    std::cout<<loan(k,n,w);
    return 0;
}