#include <iostream>
#include <vector>

bool is_even(int a){
    bool sta = false;
    if(a % 2 == 0){
        sta = true;
    }
    return sta;
}

int possibility(int a){
    int ans = 0;
    if(!is_even(a) && a>2){
        ans = (a-1)/2;
    }else if (is_even(a)  &&  a > 2){
        ans = a/2 -1;
    }
    return ans;
}

int main(){
    int N,a;
    std::vector<int> vec;
    std::cin>>N;
    for(int i = 0;i<N;i++){
        std::cin>>a;
        vec.push_back(possibility(a));
    }

    for(int i = 0;i<N;i++){
        std::cout<<vec[i]<<'\n';
    }

    return 0;
}