#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int y = 0;int queries;
    string s;
    map <string,int> m;
    while(1){
        cin>>queries>>s;
        m.insert(make_pair(s, 0));
        if(queries == 1){
            cin>>y;
            m[s] += y;   
        }else if(queries == 2){
            m[s] = 0;
        }else if(queries == 3){
            cout<<m[s]<<'\n';
        }else if(queries == -1){
            break;
        }else{
            cout<<"INVALID OPERATOR\n";
        }
    }
      
    return 0;
}


