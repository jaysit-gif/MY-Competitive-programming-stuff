#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("O3")
#pragma GCC target("sse4")
#define nl "\n"
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<long long> vl;
#define FOR(i, a, b) for (int i=a; i<(b); i++)
typedef set<int> si;
typedef long long ll;
#define el endl;

template <typename T>
istream& operator>>(istream& is,vector<T>& v);
template <typename T>
ostream& operator<<(ostream& os,vector<T>& v);

#define yes "YES\n"
#define no "NO\n"


class Solution{
    public:
    void solve(){
       int n;cin>>n;
       vi v(n);cin>>v;
       bool ok = true;
       FOR(i,0,n){
            int x = v[i];
            int y = i+1;
            //cout<<"FOR LOOP\n";
            while(x % 2 == 0){
                x = x/2;
                //cout<<"LOOP FOR X\n";
            }
            while(y % 2 == 0){
                y = y/2;
                //cout<<"LOOP FOR Y\n";
            }
            if(x != y){
                ok = false;
                break;
            }
       }
       cout<<(ok?yes:no);
    }
}; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    int N = 1;
    cin>>N;
    while(N--){
        s.solve();
    }
    return 0;
}

template <typename T>
ostream& operator<<(ostream& os,vector<T>& v){
    size_t n = v.size();
    if(n == 0){
        cerr<<"ERROR VECTOR SIZE IS ZERO";//how will the func exit if n = 0??
    }
    for(size_t i = 0;i<n;i++){
        os<<v[i]<<' ';
    }
    return os;

}

template <typename T>
istream& operator>>(istream& is,vector<T>& v){
    size_t n = v.size();
    if(n == 0){
        cerr<<"ERROR VECTOR SIZE IS ZERO";
        return is;
    }
    for(size_t i = 0;i<n;i++){
        is>>v[i];
    }
    return is;
}