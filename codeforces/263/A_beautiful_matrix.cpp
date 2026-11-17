#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int mat[5][5];
    int h,k;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                h = i+1;
                k = j+1;
            }
        }
    }
    h = abs(h - 3);k = abs(k - 3);
    cout<<h+k;
    return 0;
}