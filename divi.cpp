#include <iostream>
#include <vector>
using namespace std;

bool compi(int upper_limit,int num,int lower_limit){
    if(upper_limit>=num && num>=lower_limit ){
        return true;
    }
    return false;
}

//this was the time i tried nested iternary operator because i could save lines of code it got accepted on codeforces 
void printzer(int c){
    cout<<(compi(INT_MAX,c,1900)?"Division 1\n" :(compi(1899,c,1600) ? "Division 2\n":(compi(1599,c,1400)? "Division 3\n":(compi(1399,c,INT_MIN)? "Division 4\n": "1"))));
}

int main(){
    int c;int N;
    vector<int> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>c;
        v.push_back(c);
    }
    for(int i = 0;i<N;i++){
        printzer(v[i]);
    }
    return 0;
}