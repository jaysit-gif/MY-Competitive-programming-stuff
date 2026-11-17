// https://codeforces.com/contest/1474/problem/B


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

//this is the code it got ACed with 31ms 0kb
class Solution{
    bool prime(int a){
        if(a == 2||a == 3){
            return true;
        }
        if(a % 2 == 0 && a > 2){
            return false;
        }
        for(int i = 3;i<=sqrt(a);i+=2){
            if(a % i == 0){
                return false;
            }
        }
        return true;
    } 
    public:
    void solve(){
        bool sent = false;
        ll d,a,b;cin>>d;
        FOR(i,1+d,INT32_MAX){
            if(prime(i)){
            FOR(j,i+d,INT32_MAX){
                if(prime(j)){
                    sent = true;
                    a = i;b = j;
                    break;
                }
            }
           }
           if(sent){
             break;
           }
        }
        cout<<min(1LL*a*b,1ll*a*a*a)<<nl;
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