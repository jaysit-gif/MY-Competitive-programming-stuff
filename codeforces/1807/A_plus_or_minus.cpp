#include <iostream>
#include <vector>
using namespace std;

char plus_or_minus(int a,int b,int c){
    if(a + b == c){
        return '+';
    }
    return '-';
}

int main(){
    int N,a,b,c;
    vector<char> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a>>b>>c;
        v.push_back(plus_or_minus(a,b,c));
    }

    for(int i = 0;i<N;i++){
        cout<<v[i]<<'\n';
    }
    return 0;
}
