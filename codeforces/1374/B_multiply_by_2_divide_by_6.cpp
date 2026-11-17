#include <iostream>
#include <vector>

struct numandpower{
    int num;
    int pow;
};

numandpower powerof(int a,int n){
    numandpower p;
    int t = 0;
    while(1){
        if(a % n == 0){
            a /= n;
        }else{
            break;
        }
        t++;
    }
    p.num = a;
    p.pow = t;
    return p;
}


int noposibleways(int a){
    if(a == 1) return 0;
    int ans = -1;
    numandpower p,q;
    p = powerof(a,3);
    q = powerof(p.num,2);
    if(q.num != 1){
        return -1;
    }else if (p.pow >= q.pow){
        ans = q.pow + (p.pow - q.pow )*2;
    }
    return ans;
}

int main(){
    int N,a;
    std::vector<int> vec;
    std::cin>>N;
    for(int i = 0;i<N;i++){
        std::cin>>a;
        vec.push_back(noposibleways(a));
    }
    for(int i = 0;i<N;i++){
        std::cout<<vec[i]<<'\n';
    }
    return 0;
}