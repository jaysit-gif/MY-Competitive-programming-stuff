#include <iostream>
#include <cstring>
using namespace std;

bool compil(char s){
    if(s == 'H' || s == 'Q' || s == '9'){
        return true;
    }
    return false;
}

bool compil_string(string s){
    for(int i = 0;i<strlen(s.c_str());i++){
        if(compil(s[i])){
            return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<(compil_string(s) ? "YES" : "NO");
    return 0;
}