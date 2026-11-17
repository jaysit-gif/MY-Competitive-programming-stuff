#include <iostream>
using namespace std;

bool all_digs_distinct(int a) {
    bool seen[10] = {false};
    int digit_count = 0;
    while (a > 0) {
        int digit = a % 10;
        if (seen[digit]) return false; 
        seen[digit] = true;
        digit_count++;
        a /= 10;
    }
    
    return digit_count > 0;
}

int beautiful_year(int a){
    while(1){
        a += 1;
        if(all_digs_distinct(a)){
            break;
        }
    }
    return a;
}

int main(){
    int N;
    cin>>N;
    cout<<beautiful_year(N);
    return 0;
}
