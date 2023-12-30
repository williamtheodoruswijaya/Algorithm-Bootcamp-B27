#include <stdio.h>

int main(){
	int tujuan = 5;
	int *pointer = &tujuan;
	printf("Variabel: %d\nAlamat Variabel: %d\nNilai dari variabel pointer: %d\n\n", tujuan, pointer, *pointer);
	
	int **pointer2 = &pointer;
	int ***pointer3 = &pointer2;
	printf("Alamat Pointer 1: %d\tValue Pointer 1: %d\n", pointer, *pointer);
	printf("Alamat pointer 2: %d\tValue Pointer 2: %d\n", pointer2, **pointer2);
	printf("Alamat pointer 3: %d\tValue Pointer 3: %d\n", pointer3, ***pointer3);
	return 0;
}
