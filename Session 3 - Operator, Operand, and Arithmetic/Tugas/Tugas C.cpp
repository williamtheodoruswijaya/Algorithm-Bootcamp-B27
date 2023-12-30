#include <stdio.h>

int main(){
	int a, b;
	printf("Masukkan dua angka untuk dirata-ratakan:\n");
	scanf("%d %d", &a, &b);
	printf("rata-rata dari angka %d dan %d adalah %.0f\n", a, b, ((a+b)/2.0));
	//kenapa pake float? karena dia akan membulatkan bilangan ke bilangan terdekat, beda dengan int yang akan membulatkan ke bawah.
	return 0;
}
