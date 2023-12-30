#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int grades;
	for(int i = 0; i < n; i++){
		scanf("%d", &grades);
		int rounded = ((grades-1)/5 + 1)*5;
		if(grades >= 38 && rounded-grades < 3){
			printf("%d\n", rounded);
		}
		else{
			printf("%d\n", grades);
		}
	}
	return 0;
}
