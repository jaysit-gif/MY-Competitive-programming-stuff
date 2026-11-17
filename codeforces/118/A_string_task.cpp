#include<iostream>
#include<algorithm>
#include <string>
using namespace std;

string solve(string s){
    for(int i = 0;i<s.length();i++){
        if((s[i] == 'a')||(s[i] == 'e')||(s[i] == 'i')||(s[i] == 'o')||(s[i] == 'u')){
            s[i] = '.';
        }
    }
    return s;
}

int main(){
    string s;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>s;
    sort(s.begin(),s.end());
    cout<<solve(s);
    return 0;
}