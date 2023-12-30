#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int number = 0, sample = 0;
	for(int d1 = 1; d1 <= 6; d1++){
		for(int d2 = 1; d2 <= 6; d2++){
			if(d1 + d2 == n){
				if(d1 != d2){
					number++;
				}
			}
			sample++;
		}
	}
	printf("n(A): %d\n", number);
	printf("n(S): %d\n", sample);
	printf("p(A): %d / %d\n", number, sample);
	return 0;
}
