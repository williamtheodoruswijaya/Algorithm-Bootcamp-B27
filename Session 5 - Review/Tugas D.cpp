#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if ((n % 3 == 0)||(n % 3 == 1)){
		printf("1 1 %d\n", n-2);
	}
	else if((n % 3 == 0) || (n % 3 == 2)){
		printf("2 2 %d\n", n-3);
	}
	return 0;
}
