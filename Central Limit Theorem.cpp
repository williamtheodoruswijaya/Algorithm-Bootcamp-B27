#include <stdio.h>
#include <stdlib.h>

int size(int arr[], int n){
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	scanf("%d", &n);
	int *num = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		num[i] = rand() % 100 + 1;
		printf("%d ", num[i]);
	}
	printf("\n");
	
	int hashSize = size(num, n) + 1;
	int *hash = (int*)malloc(hashSize * sizeof(int));
	for(int i = 0; i < hashSize; i++){
		hash[i] = 0;
	}
	
	for(int i = 0; i < n; i++){
		int index = num[i];
		hash[index]++;
	}
	
	for(int i = 0; i < hashSize; i++){
        if(hash[i] != 0){
            printf("%d: ", i);
            for(int j = 0; j < hash[i]; j++){
                printf("#");
            }
            printf("\n");
        }
    }
    
	free(num);
	free(hash);
	return 0;
}
