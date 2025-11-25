#include <iostream>

#define ull unsigned long long

ull gcd(ull a,ull b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

ull no_tiles(ull a,ull b,ull c){
    return (a*b)/(c*c);
}

int main(){
    ull a,b,c,k;
    std::cin>>a>>b>>c;
    k = no_tiles(a,b,c);
    std::cout<<k;
    return 0;
}