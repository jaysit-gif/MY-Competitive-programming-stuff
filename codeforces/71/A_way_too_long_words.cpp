#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool too_long(std::string str){
    bool ret = false;
    if(str.length() > 10){
        ret = true;
    }
    return ret;
}

std::string shortener(std::string str){
    std::string s;
    std::stringstream ss;
    if(too_long(str)){
        int len = str.length();
        ss << str[0] << len -2 <<str[len -1];
    }else{
        return str;
    }
    s = ss.str();
    return s;
}

int main(){
    int N;
    std::cin>>N;
    std::vector<std::string> vec;
    std::string str;
    for(int i = 0;i<N;i++){
    std::cin>>str;
    vec.push_back(shortener(str));
    }
    for(int i = 0;i<N;i++){
        std::cout<<vec[i]<<'\n';
    }
    return 0;
}
