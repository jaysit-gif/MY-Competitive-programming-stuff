#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    int c = 0,l = 0;
    for(int i = 1;i<n;i++){
        if(s[i-1] != s[i]){
            if(l>c){
                c = l;
            }
            l = 0;
        }
        l++;
    }
    if(l>c){
        c = l;
    }
    cout<<c<<'\n';
    return 0;
}