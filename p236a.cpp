#include <iostream>
#include <set>
#include <string>
#include <cstring>
using namespace std;

set<char> strtoset(string s){
    set<char> a;
    for(char x:s){
        a.insert(x);
    }
    return a;
}

int main(){
    string s;
    cin>>s;
    set<char> a = strtoset(s);
    if(a.size()%2 == 0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}