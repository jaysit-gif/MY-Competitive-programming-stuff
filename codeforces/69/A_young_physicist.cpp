#include <iostream>
#include <vector>

int summa(std::vector<int> a){
    int k = 0;
    for(int i = 0;i<a.size();i++){
        k += a[i];
    }
    return k;
}

int main(){
    std::vector<int> vec_x,vec_y,vec_z;
    int N,x,y,z;
    std::cin>>N;
    for(int i =0;i<N;i++){
        std::cin>>x>>y>>z;
        vec_x.push_back(x);vec_y.push_back(y);vec_z.push_back(z);
    }
    if(summa(vec_x)==0 && summa(vec_y) == 0 & summa(vec_z) == 0){
        std::cout<<"YES\n";
    }else{
        std::cout<<"NO\n";
    }
    return 0;
}