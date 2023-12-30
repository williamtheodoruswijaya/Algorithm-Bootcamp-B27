#include <stdio.h>

void BubbleSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1-i; j++){
			if(arr[j]<arr[j+1]){
				int swap = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = swap;
			}
		}
	}
}

int main(){
	int n;
	scanf("%d", &n);
	
	int ranked[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &ranked[i]);
	}
	BubbleSort(ranked, n);
	
	int m;
	scanf("%d", &m);
	
	int player[m];
	for(int i = 0; i < m; i++){
		scanf("%d", &player[i]);
	}
	
	for(int i = 0; i < m; i++){
		if(player[i] < ranked[n-1]){
			printf("%d\n", n);
		}
		if(player[i] > ranked[n-1] && player[i] < ranked[n-1-i]){
			printf("%d\n", n-i);
		}
	}
	return 0;
}
