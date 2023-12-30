#include <stdio.h>
int main(){
	char var1[100];
	char var2[100];
	scanf("%[^\n] %[^\n]", var1, var2);
	getchar();
	printf("Hello %s %s\n", var1, var2);
	return 0;
}
