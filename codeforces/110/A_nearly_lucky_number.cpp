#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_lucky(int a){
    if(a == 4 || a == 7){
        return true;
    }
    return false;
}

bool is_num_lucky(string a){
    int k = 0;
    for(int i = 0;i<a.size();i++){
        if(a[i] == '4' || a[i] == '7'){
            k++;
        }
    }
    return is_lucky(k);
}

int main(){
    string s;
    cin>>s;
    cout<<(is_num_lucky(s) ? "YES\n" : "NO\n");
    return 0;
}