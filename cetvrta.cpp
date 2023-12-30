#include <stdio.h>

int main(){
	int x1, y1;
	scanf("%d %d", &x1, &y1);
	int x2, y2;
	scanf("%d %d", &x2, &y2);
	int x3, y3;
	scanf("%d %d", &x3, &y3);
	int x4, y4;
	
	if(x1 == x2){
		x4 = x3;
	}
	else if(x1 == x3){
		x4 = x2;
	}
	else if(x2 == x3){
		x4 = x1;
	}
	
	if(y1 == y2){
		y4 = y3;
	}
	else if(y1 == y3){
		y4 = y2;
	}
	else{
		y4 = y1;
	}
	printf("%d %d\n", x4, y4);
	return 0;
}
