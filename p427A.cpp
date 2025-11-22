#include <iostream>
#include <cstdio>
using namespace std;
#define n '\n'
#define print printf
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,a;
    scanf("%d",&N);
    //this sol of cf problem 427A got AC with 77ms can i know why 77ms i thought it must be 50ms
    int police = 0;int crime = 0;
    while(N--){
        scanf("%d",&a);
        if(a >= 1){
            police+=a;
        }
        if(a == -1){
            crime++;
            if(police != 0){
                crime--;
                police--;
            }
        }
    }
    print("%d",crime);
    return 0;
}