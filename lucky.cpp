#include <iostream>
#include <vector>

using namespace std;

bool sumstring(string s){
    int k = 0;int k1 = 0;
    for(int i = 0;i<s.size()/2;i++){
        k += (int)s[i];
    }
    for(int i = s.size()/2;i<s.size();i++){
        k1 += (int)s[i];
    }

    if(k == k1){
        return true;
    }
    return false;
}

int main(){
    int N;
    cin>>N;
    vector<string> m;
    string s;
    for(int i = 0;i<N;i++){
        cin>>s;
        m.push_back(s);
    }
    for(int i = 0;i<N;i++){
        cout<<(sumstring(m[i]) ? "YES\n" : "NO\n");
    }
    return 0;
}