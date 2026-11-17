#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t, x, n;
  for (cin >> t; t--;) {
    cin >> x >> n;
    cout << x * (1 & n) << endl;
  }
  return 0;
}