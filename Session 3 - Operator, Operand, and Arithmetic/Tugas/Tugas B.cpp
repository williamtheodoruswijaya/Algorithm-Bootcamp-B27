#include <stdio.h>
int main(){
	int H, A;
	printf("Masukkan Health dari musuh dan Attack dari Serval:\n");
	scanf("%d %d", &H, &A);
	int hasil = H/A;
	int sisa = (H % A) != 0;
	printf("Serval memerlukan %d serangan untuk membunuh monsternya\n", hasil+sisa);
	return 0;
}
