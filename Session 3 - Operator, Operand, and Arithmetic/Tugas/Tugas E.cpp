#include <stdio.h>

int main(){
	int K = 500, X;
	printf("Masukkan jumlah dari koin 500 yen yg anda miliki dan total dari uang yang mau anda bandingkan!\n");
	scanf("%d %d", &K, &X);
	printf("Koin yang anda miliki lebih besar daripada uang yang anda bandingkan: %s\n", (K*500) >= X ? "Benar":"Salah");
	return 0;
}
