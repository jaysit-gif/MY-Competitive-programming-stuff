#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


bool is_notgroup(string a,string b){
    const char *s = a.c_str();
    const char *p = b.c_str();
    if(strcmp(s,p) != 0){
        return true;
    }
    return false;
}

/*grok this problem was accepted as a solution on codeforces but it took 248ms and 1700kb why is it so bloated its just 40 lines of code*/

int no_groups(vector<string> v,int N){
    int k = 1;
    for(int i = 0;i<=N-2;i++){
        if(is_notgroup(v[i],v[i+1])){
            k++;
        }
    }
    return k;
}

int main(){
    int N;string d;
    vector<string> s;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>d;
        s.push_back(d);
    }
    cout<<'\n';
    cout<<no_groups(s,N);
    return 0;
}