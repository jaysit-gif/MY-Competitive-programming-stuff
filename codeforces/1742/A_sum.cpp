#include <iostream>
#include <vector>
using namespace std;

string sum_is(int a,int b,int c){
    if((a + c == b) || (a+b == c) || (b+c == a)){
        return "YES";
    }
    return "NO";
}

int main(){
    int N,a,b,c;vector<string> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a>>b>>c;
        v.push_back(sum_is(a,b,c));
    }
    for(int i = 0;i<N;i++){
        cout<<v[i]<<'\n';
    }
    return 0;
}