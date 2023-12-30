#include <stdio.h>
int main (){
	int alas, tinggi;
	printf("Masukkan alas dan tinggi dari segitiga: ");
	scanf("%d %d", &alas, &tinggi);
	printf("Luas segitiga tersebut adalah %d\n", (alas*tinggi)/2);
	return 0;
}
