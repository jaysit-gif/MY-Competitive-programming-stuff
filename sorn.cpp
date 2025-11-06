#include <string>
#include<cmath>
#include<vector>
#include <iostream>
using namespace std;

/*this code was a solution to codeforces problem "sum of round numbers" it got accepted with 77ms 0kb is it ok??*/

int no_summands(string s){
    int k = 0;
    for(int i = (s.size() -1);i>=0;i--){
        if(s[i] != '0'){
            k++;
        }
    }
    return k;
}

vector<int> sumands(string k){
    vector<int> s;
    int j = 0;
    for(int i = k.size()-1;i>=0;i--){
        if(k[i] != '0'){
            j = k[i] - '0';
            s.push_back(j*pow(10,k.size()-i-1));
        }
    }
    return s;
}

void oput(string s){
    cout<<no_summands(s);
    vector<int> c= sumands(s);
    cout<<'\n';
    for(int i = 0;i<c.size();i++){
        cout<<c[i]<<'\t';
    }
    cout<<"\n";
}

int main(){
    int N;
    cin>>N;
    string s;
    vector<string> v;
    for(int i = 0;i<N;i++){
        cin>>s;
        v.push_back(s);
    }
    for(int i = 0;i<N;i++){
        oput(v[i]);
    }
    return 0;
}

