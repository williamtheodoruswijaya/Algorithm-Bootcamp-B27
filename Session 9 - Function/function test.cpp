#include <stdio.h>
int test(int a = 3, int b = 2){
		return a+b;
	}

int main(){
	printf("%d\n", test()); //function tanpa ngedeclare variabel/value
	printf("%d\n", test(100, 200)); //function dengan ngedeclare value/variabel
	return 0;
}
