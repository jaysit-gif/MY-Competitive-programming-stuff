#include<iostream>
#include<string>
using namespace std;
int targ(string s,size_t k){
    int count = 0;
    for(size_t i = 0;i<k-1;i++){
        if(s[i] != s[k-1]){
            count++;
        }
    }
    return count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    size_t k;
    string s;
    while(N--){
        cin>>k;
        cin>>s;
        int t = targ(s,k);
        cout<<t<<'\n';
    }
    return 0;
}