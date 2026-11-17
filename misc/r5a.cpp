#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll l,r,x;
    cin>>l>>r>>x;
    ll low  = max(l, 2*x - r);
    ll high = min({r, 2*x - l, x});
    ll ans = (low <= high) ? high - low + 1 : 0LL;
    cout << ans << '\n';
}

int main(){
    int N;cin>>N;
    while(N--){
        solve();
    }
    return 0;
}
