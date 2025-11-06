#include <iostream>

#define ull unsigned long long

ull gcd(ull a,ull b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

ull no_tiles(ull a,ull b,ull c){
    ull k;ull k1 = gcd(a,c);ull k2 = gcd(b,c);

    if(gcd(a,b) == 1 ){
        if(c > a*b){
            return 1;
        }
        if(b == 1){
            return a/c;
        }else if(a == 1){
            return b/c;
        }
    }else{
      (k1 != 1 && k2 != 1) ? k = k1*k2: k = a*b;
    }
   
    return k;
}

int main(){
    ull a,b,c,k;
    std::cin>>a>>b>>c;
    k = no_tiles(a,b,c);
    std::cout<<k;
    return 0;
}