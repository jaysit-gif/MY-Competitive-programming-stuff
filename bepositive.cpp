#include <iostream>
using namespace std;

struct pdata{
    int negs;
    int zero;
};

pdata analysis(int *arr,int n){
    int num_negs = 0;
    int num_zero = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == -1){
            num_negs++;
        }else if(arr[i] == 0){
            num_zero++;
        }
    }
    pdata k;
    k.negs = num_negs;
    k.zero = num_zero;
    return k;
}

int cal_c(pdata analysis){
    int k = 0;
    if((analysis.negs % 2) != 0){
        k = 2+analysis.zero;
    }else{
        k = analysis.zero;
    }
    return k;
}

int main(){
    int arr[8];
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,n,a;
    cin>>N;
    while(N--){
        cin>>n;
        for(int i = 0;i<n;i++){
            cin>>a;
            arr[i] = a;
        }
        cout<<cal_c(analysis(arr,n))<<'\n';
    }
    return 0;
}