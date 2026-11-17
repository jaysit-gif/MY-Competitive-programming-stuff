#include <iostream>
#include <vector>
using namespace std;

struct sticks{
    int a;
    int b;
    int c;
    int d;
};
bool is_square(sticks s){
    int k = s.a;
    bool v = false;
    if(k == s.b){
        if(k == s.c){
            if(k == s.d){
                v = true;
            }
        }
    }
    return v;
}

int main(){
    vector<sticks> v;
    int N;
    sticks S;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>S.a>>S.b>>S.c>>S.d;
        v.push_back(S);
    }
    for(int i = 0;i<N;i++){
        cout<<(is_square(v[i]) ? "YES\n" : "NO\n");
    }
    return 0;
}