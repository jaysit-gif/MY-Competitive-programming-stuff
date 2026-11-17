#include <iostream>
#include<string>
#include<cstring>
#include <cstdio>
using namespace std;

void editwub(char *s,size_t len){
    for(size_t i = 2;i<len;i++){
        if(
            s[i-2] == 'W' &&
            s[i-1] == 'U'&&
            s[i] == 'B' 
        ){
            s[i - 2] = ',';
            s[i-1] = ',';
            s[i] = ',';
        }
    }
}

int main(){
    string s;
    cin>>s;
    const char*r = s.c_str();
    char *s_str;
    s_str =const_cast<char*>(r);
    size_t len = strlen(s_str);
    char *t;
    editwub(s_str,len);
    t = strtok(s_str,",");
    while(t != NULL){
        printf("%s ",t);
        t = strtok(NULL,",");
    }
    return 0;
}