#include <stdio.h>

int main(){
	int tc;
	scanf("%d", &tc);
	for(int i = 0; i < tc; i++){
		int n;
		scanf("%d", &n);
		int h = 1;
		for(int j = 0; j < n; j++){
			if(j % 2 == 0){
				h *= 2;
			}
			else{
				h += 1;
			}
		}
		printf("%d\n", h);
	}
	return 0;
}
