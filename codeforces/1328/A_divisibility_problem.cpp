#include <iostream>
#include <vector>

int remainder(int a,int b){
   int  k = a/b;
   return (k+1)*b-a;
}

int steps_d(int a,int b){
    int t = 0;
    if(a<b){
        return b-a;
    }else if(a%b != 0){
        t = remainder(a,b);
    }
    return t;
}

int main(){
    std::vector<int> vec;
    int N,a,b;
    std::cin>>N;
    for(int i = 0;i<N;i++){
        std::cin>>a>>b;
        vec.push_back(steps_d(a,b));
    }

    for(int i = 0;i<N;i++){
        std::cout<<vec[i]<<'\n';
    }
    return 0;
}