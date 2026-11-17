#include<iostream>
#include<cstring>
#include<string>
using namespace std;

string simplify(string s,size_t n){
    string a;
    a.resize(n);
    for(size_t i = 0;i<n;i++){
        if(s[i] == 'B' || s[i] == 'G'){
            a[i] = 'X';
        }else{
            a[i] = s[i];
        }
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    string s,s1;
    size_t n;
    cin>>N;
    while(N--){
        cin>>n;
        cin>>s>>s1;;
        s = simplify(s,n);
        s1 = simplify(s1,n);
        if(strcmp(s.c_str(),s1.c_str()) == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
