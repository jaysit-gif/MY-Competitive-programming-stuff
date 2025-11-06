#include<vector>

int max(int *arr,int N){
    int m = arr[0];
    for(int i = 0;i<N;i++){
        if(m < arr[i]){
            m = arr[i];
        }
    }
    return m;
}

int max(std::vector<int> V){
    int m = V[0];
    for(int i = 0;i<V.size();i++){
        if(m < V[i]){
            m = V[i];
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


int min(std::vector<int> arr){
    int m = arr[0];
    for(int i = 0;i<arr.size();i++){
        if(m > arr[i]){
            m = arr[i];
        }
    }
    return m;
}
