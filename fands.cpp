#include <iostream>
#include<sstream>
#include <string>
using namespace std;

string operator*(int i,string s){
    string result;
    for(int j = 0;j<i;j++){
        result += s;
    }
    return result;
}
/*ok this is the solution of the "Fox and Snake" problem on CF it got accepted it took 61ms 0KB i think we can optimize the code to sub 50ms*/
void snake_body(int n,int m){
    int k = n % 4;
    if(k == 1 || k == 3){
        cout<<m*string("#")<<'\n';
        return;
    }else if(k == 0){
        cout<<"#"<<(m-1)*string(".")<<'\n';
        return;
    }else{
        cout<<(m-1)*string(".")<<"#"<<'\n';
        return;
    }
    return ;
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        snake_body(i,m);
    }
    return 0;
}