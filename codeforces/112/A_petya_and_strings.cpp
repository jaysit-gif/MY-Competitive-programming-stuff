#include <iostream>
#include <string>
using namespace std;

char capita(char a){
    int b = (int)a;
    if(b>= 65 && b<= (65+26)){
        b = (b + 32);
        a = (char)b;
        return a;
    }
    return a;
}


int main(){
    string s,s1;
    cin>>s>>s1;
    int k = 0;
    for(int i = 0;i<s.size();i++){
        if(capita(s[i]) < capita(s1[i])){
            cout<<"-1\n";
            k++;
            break;
        }else if(capita(s[i]) > capita(s1[i])){
            cout<<"1\n";
            k++;
            break;
        }
    }
    if(k==0){
        cout<<"0\n";
    }
    return 0;
}