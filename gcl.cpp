#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool correct(vector<int> v){
    if(v[2]-v[0]>=10){
        return false;
    }
    return true;
}

int main(void){
    int g,c,l;
    cin>>g>>c>>l;
    vector v = {g,c,l};
    sort(v.begin(),v.end());
    if(correct(v)){
        cout<<"final "<<v[1];
        return 0; 
    }
    cout<<"check again";
    return 0;
}
