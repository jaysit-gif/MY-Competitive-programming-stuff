#include<iostream>

int max(int *arr,int N){
    int m = arr[0];
    for(int i = 0;i<N;i++){
        if(m < arr[i]){
            m = arr[i];
        }
    }
    return m;
}

int min(int *arr,int N){
    int m = arr[0];
    for(int i = 0;i<N;i++){
        if(m > arr[i]){
            m = arr[i];
        }
    }
    return m;
}

int main(){
    int a,b,c;
    std::cin>>a>>b>>c;
    int arr[4] = {a+b+c,(a+b)*c,a*b*c,a*(b+c)};
    std::cout<<max(arr,4)<<'\n'<<min(arr,4);
    return 0;
}