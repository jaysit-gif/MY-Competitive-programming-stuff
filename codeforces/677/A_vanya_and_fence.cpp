#include <iostream>
#include <vector>
using namespace std;


int required_width(int h,vector<int> v){
    int width = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]>h){
            width += 2;
        }else{
            width += 1;
        }
    }
    return width;
}

int main(){
    int n,h;
    cin>>n>>h;
    vector <int> v;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<required_width(h,v);
    return 0;
}