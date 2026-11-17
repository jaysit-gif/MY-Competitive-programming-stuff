#include <bits\stdc++.h>
using namespace std;

int main(){
    string s;vector<char> j;
    cin>>s;
    sort(s.begin(),s.end());
    for(char x:s){
        if(x != '+'){
            j.push_back(x);
        }
    }
    int n = j.size();
    if(n>1){
        for(int i = 0;i<=n-2;i++){
            cout<<j[i]<<'+';
        }
        cout<<j[n-1]<<'\n';
    }else{
        cout<<s;
    }

    return 0;
}