#include<iostream>
#include <vector>
#include<string>
using namespace std;

struct antondanik{
    int anton;
    int danik;
};

antondanik win(vector<char> s){
    int a = 0;int b = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'A'){
            a++;
        }else if(s[i] == 'D'){
            b++;
        }
    }
    antondanik d;
    d.anton = a;d.danik = b;
    return d;
}

int main(){
    vector<char> s;int N;char m;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>m;
        s.push_back(m);
    }
    antondanik d = win(s);
    if(d.anton>d.danik){
        cout<<"Anton\n";
    }else if (d.anton<d.danik){
        cout<<"Danik\n";
    }else{
        cout<<"Friendship\n";
    }
    return 0;
}