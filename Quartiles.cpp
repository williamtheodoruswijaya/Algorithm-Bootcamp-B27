#include <stdio.h>

void Sort(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length - 1 - i; j++){
            if(arr[j]>arr[j+1]){
                int swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
}

int Q1(int arr[], int length){
    int median;
    int mid = length/2;
    if(mid % 2 != 0){
        median = mid/2;
    }
    else{
        median = (mid/2-1 + mid/2)/2;
    }
    return((arr[median]+arr[median+1])/2);
}

int Q2(int arr[], int length){
    int median;
    if(length % 2 != 0){
        median = arr[length/2];
    }
    else{
        median = (arr[length/2-1]+arr[length/2])/2;
    }
    return median;
}

int Q3(int arr[], int length){
    int left = (length/2) + 1;
    int right = length - 1;
    int median;
    if(length % 2 != 0){
        median = left + (right-left)/2;
    }
    else{
        median = (((left + (right-left)/2)-1)+(left + (right-left)/2))/2;
    }
    return (arr[median]+arr[median+1])/2;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    Sort(arr, n);
    printf("%d\n", Q1(arr, n));
    printf("%d\n", Q2(arr, n));
    printf("%d\n", Q3(arr, n));
    return 0;
}
