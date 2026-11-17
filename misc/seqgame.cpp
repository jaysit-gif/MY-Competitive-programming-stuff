#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool in_range(int a, int b, int c) {
    return a <= b && b <= c;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    while(N--){
        vector <int> v;
        int a,b,c;
        cin>>a;
        for(int i = 0;i<a;i++){
            cin>>b;
            v.push_back(b);
        }
        cin>>c;
        int min = *std::min_element(v.begin(),v.end());
        int max = *std::max_element(v.begin(),v.end());
        if(!in_range(min,c,max)){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }

    }
    return 0;
}
