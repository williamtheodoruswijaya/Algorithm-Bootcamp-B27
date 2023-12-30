#include <stdio.h>
int main(){
	int A, B;
	printf("Masukkan nilai A dan B dari angka 1 - 100:\n");
	scanf("%d %d", &A, &B);
	if((A>0)&& (B == 0)){
		printf("Ini adalah Gold\n");
	}
		else if((A == 0) && (B>0)){
			printf("Ini adalah Silver\n");
		}
	else{
		printf("Ini adalah Alloy\n");
	}
	return 0;
}
