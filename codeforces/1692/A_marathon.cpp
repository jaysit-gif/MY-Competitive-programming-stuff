#include <iostream>
#include <vector>
using namespace std;

int no_ofpeopleahead(int a,int b,int c,int d){
    int k = 0;
    int arr[4] = {a,b,c,d}; 
    for(int i = 0;i<4;i++){
        if(a < arr[i]){
            k++;
        }
    }
    return k;
}

int main(){
    int N,a,b,c,d;
    vector<int> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a>>b>>c>>d;
        v.push_back(no_ofpeopleahead(a,b,c,d));
    }
    for(int i = 0;i<N;i++){
        cout<<v[i]<<'\n';
    }
    return 0;
}