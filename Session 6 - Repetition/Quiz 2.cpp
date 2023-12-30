#include <stdio.h>
int main(){
	int N;
	int total = 0;
	scanf("%d\n", &N);
	while(N >= 0){
		printf("%d + ", N);
		N -= 1;
		total += N+1;
		if (N == 0){
			printf("1 = %d\n", total);
		}
	}
	return 0;
}
