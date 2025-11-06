#include <iostream>
#include <vector>

int main(){
    int N;
    char q,w,e;
    int x = 0;
    std::cin>>N;
    for(int i = 0;i<N;i++){
        std::cin>>q>>w>>e;
        if((q == '+' && w == '+')||(w == '+' && e == '+')){
            x++;
        }else if((q == '-' && w == '-')||(w == '-' && e == '-')){
            x--;
        }
    }
    std::cout<<x<<'\n';
    return 0;
}