#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,s1;
    int N,n;
    cin>>N;
    while(N--){
        cin>>n;
        cin>>s>>s1;
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        cout<<(strcmp(s.c_str(),s1.c_str()) == 0 ? "YES\n" : "NO\n");
    }
    return 0;
}