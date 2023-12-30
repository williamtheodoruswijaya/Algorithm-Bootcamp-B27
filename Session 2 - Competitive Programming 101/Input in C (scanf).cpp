#include <stdio.h>

//CARA BUAT INPUT DI C (scanf)

int main(){
	int a; 
	float b; 
	char c[100]; //buat variablenya dulu
	scanf("%d %f %[^\n]", &a, &b, &c); //pake scanf buat input, templatenya kek dibawah ini:
//scanf("jenis modifier", &"nama variabel, &"nama variabel", &"nama variabel")
	printf("Ini integer yang tadi = %d\n", a);
	printf("Ini float yang tadi = %f\n", b);
	printf("Ini string yang tadi = %s\n", c);
	return 0;
}
