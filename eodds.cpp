#include <iostream>


bool is_even(int a){
    bool sta = false;
    if(a % 2 == 0){
        sta = true;
    }
    return sta;
}

long long num_at_index(long long a,long long k){
    long long mid = a/2;
    if( !is_even(a)){
        mid= a/2 + 1;
    }
    long long ans = -1;
    if(k <= mid){
        ans = 2*k -1;
    }else{
        ans = 2*(k-mid);
    }
    return ans;
}

int main(){
    long long a,b;//make this program capable of handling super large numbers
    std::cin>>a>>b;
    std::cout<<num_at_index(a,b)<<'\n';
    return 0;
}
