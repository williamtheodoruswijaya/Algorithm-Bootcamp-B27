#include <stdio.h>
int main(){
	int N, total = 0;
	scanf("%d", &N);
	for(int i = N;i > 1;i--){
		printf("%d + ", i);
		total += i;
	}
	printf(" 1 = %d\n", total+1);
	return 0;
}
