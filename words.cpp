#include <iostream>
using namespace std;

bool is_capita(char a){
    if(((int)a>=65) &&((int)a<=91)){
        return true;
    }
    return false;
}

bool is_majority_capital(string a){
    int k = a.size();
    int p = 0;
    for(int i = 0;i<k;i++){
        if(is_capita(a[i])){
            p++;
        }
    }
    if((float)p/k > 0.50){
        return true;
    }
    return false;
}

string capitali(string a){
    for(int i = 0;i<a.size();i++){
      if(!is_capita(a[i])){
        int k = (int)a[i];
        k = k-32;
        a[i] = (char)k;
      }
    }
    return a;
}

string decapitali(string a){
    for(int i = 0;i<a.size();i++){
      if(is_capita(a[i])){
          int k = (int)a[i];
          k = k+32;
          a[i] = (char)k;
       }
    }
    return a;
}

string doer(string a){
    if(is_majority_capital(a)){
        return capitali(a);
    }
    return decapitali(a);
}

int main(){
    string a;
    cin>>a;
    cout<<doer(a);
    return 0;
}