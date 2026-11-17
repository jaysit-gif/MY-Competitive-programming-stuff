#include <iostream>
#include <vector>
using namespace std;

struct rooms{
    int people;
    int capacity;
};

bool is_room_empty(rooms a){
    if(a.capacity - a.people < 2){
        return false;
    }
    return true;
}

int empty_rooms(vector<rooms> v){
    int j = 0;
    for(int i = 0;i<v.size();i++){
        if(is_room_empty(v[i])){
            j++;
        }
    }
    return j;
}

int main(){
    int N,a,b;
    vector<rooms> v;
    cin>>N;
    for(int i = 0;i<N;i++){
        cin>>a>>b;
        rooms c;
        c.people = a;
        c.capacity = b;
        v.push_back(c);
    }
    cout<<empty_rooms(v);
    return 0;
}