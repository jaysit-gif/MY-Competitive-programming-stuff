#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int max(vector<int> v){
    int m = v[0];
    for(int i = 0;i<v.size();i++){
        if(m < v[i]){
            m = v[i];
        }
    }
    return m;
}

int min(vector<int> v){
    int m = v[0];
    for(int i = 0;i<v.size();i++){
        if(m > v[i]){
            m = v[i];
        }
    }
    return m;
}

int indexes(vector<int> v,int b,int e){
    vector<int> c;int m;
    for(int i = 0;i<v.size();i++){
        if(b == v[i]){
            c.push_back(i);
        }
    }
    m = max(c);
    if(e == 0){
        m = min(c);
    }
    return m;
}

struct maxmin{
    int max;
    int min;
    int max_index;
    int min_index;
};


maxmin vect_info(vector<int> v){
    maxmin z;
    z.max = max(v);
    z.min = min(v);
    z.max_index = indexes(v,z.max,0);
    z.min_index = indexes(v,z.min,1);
    return z;
}

int swap_counter(vector<int> v){
    maxmin c = vect_info(v);
    int SIZE = v.size()-1;
    if(c.max_index < c.min_index){
        c.min_index = abs(SIZE - c.min_index);
        return c.max_index + c.min_index;
    }
    c.min_index = abs(SIZE - c.min_index);
    return c.max_index + c.min_index - 1;
}

int main(){
    int N,a;
    cin>>N;
    vector<int> v;
    for(int i = 0;i<N;i++){
        cin>>a;
        v.push_back(a);
    }
    maxmin c = vect_info(v);
    cout<<swap_counter(v);
    return 0;
}