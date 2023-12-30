#include <stdio.h>
int main(){
	int N;
	int totalganjil = 0, totalgenap = 0;
	scanf("%d", &N);
	for(int i = 1;i <= N;i++){
		if(i % 2 != 0){
			printf("ganjil = %d\n", i);
			totalganjil += i;
		}
		else{
		printf("genap = %d\n", i);
		totalgenap += i;
		}
	}
	printf("Total ganjil = %d Total genap = %d\n", totalganjil, totalgenap);
	return 0;
}
