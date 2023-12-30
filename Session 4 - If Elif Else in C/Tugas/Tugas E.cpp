#include <stdio.h>
int main(){
	int N;
	printf("Masukkan nilai N");
	scanf("%d", &N);
	int tax = (1.08 * N);
	if(tax<206){
		printf("Nilai pajak lebih kecil dari 206 - Yay!\n");
	}
		else if(tax == 206){
			printf("Nilai pajak sama dengan 206 - so-so\n");
		}
	else{
	printf("Nilai pajak lebih besar daripada 206 - :(\n");
	}
	return 0;
}
