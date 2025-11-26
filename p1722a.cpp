#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
#define TIMUR_CONST 5

void solve_first(string input,size_t N){
    string s = "Timru";
    if(N == TIMUR_CONST){
        sort(input.begin(),input.end());
        if(strcmp(s.c_str(),input.c_str()) == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    int N;
    size_t n;
    cin>>N;
    while(N--){
        cin>>n;
        cin>>input;
        solve_first(input,n);
    }
    return 0;
}