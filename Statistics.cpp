#include <stdio.h>

int Max(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int Min(int arr[], int n){
	int min = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	for(int i = 1; i <= 4; i++){
		int n;
		scanf("%d", &n);
		int arr[n];
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		int max = Max(arr, n);
		int min = Min(arr, n);
		int range = max - min;
		printf("Case %d: %d %d %d\n", i, min, max, range);
	}
	return 0;
}
