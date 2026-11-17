#include <set>
#include <iostream>

int main(){
    std::set<int> s;
    for(int i = 0;i<5;i++){
        s.insert(3*i);
    }
    std::cout<<s.size()<<'\n';
    for(int i : s){
        std::cout<<i<<'\t';
    }
    
}
