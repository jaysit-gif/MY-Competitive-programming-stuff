#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    int N,a,b;
    std::cin>>N;
    for(int i = 0;i<N;i++){
        std::cin>>a>>b;
        vec.push_back(b-a);
    }
    for(int i = 0;i<vec.size();i++){
        std::cout<<vec[i]<<'\n';
    }
    return 0;
}