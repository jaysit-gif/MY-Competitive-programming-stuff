#include <iostream>
#include <vector>
using namespace std;

int counter(vector<char> v){
    int count =0;
    for(int i = 0;i<v.size()-1;i++){
        if(v[i] == v[i+1]){
            count++;
        }
    }
    return count;
}


int main(){
    char s;
    vector<char> vec;
    int N;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>s;
        vec.push_back(s);
    }

    cout<<counter(vec);
    return 0;
}