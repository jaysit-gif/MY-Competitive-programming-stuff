#include <iostream>
#include <vector>

int maximus(int a,int b,int c,int d){
    std::vector<int> vec = {a,b,c,d};
    int max = vec[0];
    for(int i = 0;i<4;i++){
        if(max<vec[i]){
            max = vec[i];
        }
    }
    return max;
}

std::vector<int> checker(int a,int b,int c,int d){
    std::vector<int> vec = {a,b,c,d};
    std::vector<int> v;
    for(int i = 0;i<vec.size();i++){
        if(vec[i] > 0){
            v.push_back(vec[i]);
        }
    }
    return v;
}

int main(){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    int M = maximus(a,b,c,d);
    a = M-a;b = M-b;c = M-c;d= M - d;
    std::vector<int> v = checker(a,b,c,d);
    std::cout<<v[0]<<" " << v[1]<<" "<<v[2]<<'\n';
    return 0;
}