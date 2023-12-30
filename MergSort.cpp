#include <stdio.h>

void combine(int arr[], int left, int mid, int right){
	int leftsize = mid + 1 - left;
	int rightsize = right - mid;
	
	int leftarr[leftsize];
	int rightarr[rightsize];
	
	for(int i = 0; i < leftsize; i++){
		leftarr[i] = arr[left+i];
	}
	for(int i = 0; i < rightsize; i++){
		rightarr[i] = arr[mid+1+i];
	}
	
	int leftidx = 0, rightidx = 0;
	while(leftidx < leftsize && rightidx < rightsize){
		if(leftarr[leftidx] > rightarr[rightidx]){
			arr[left] = leftarr[leftidx];
			leftidx++;
			left++;
		}
		else{
			arr[left]=rightarr[rightidx];
			rightidx++;
			left++;
		}
	}
	while(leftidx < leftsize){
		arr[left] = leftarr[leftidx];
		leftidx++;
		left++;
	}
	while(rightidx < rightsize){
		arr[left] = rightarr[rightidx];
		rightidx++;
		left++;
	}
}

void mergesort(int arr[], int left, int right){
	if(left >= right){
		return;
	}
	int mid = left + (right - left)/2;
	mergesort(arr, left, mid);
	mergesort(arr, mid+1, right);
	combine(arr, left, mid, right);
}

void printarr(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[] = {854, 231, 845, 312, 857, 756, 32, 545, 665, 131, 100, 3, 6, 5, 2, 887};
	int length = sizeof(arr)/sizeof(int);
	int left = 0;
	int right = length - 1;
	mergesort(arr, left, right);
	printarr(arr, length);
	return 0;
}
