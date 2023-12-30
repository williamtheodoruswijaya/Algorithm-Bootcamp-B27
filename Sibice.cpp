#include <stdio.h>

int main(){
	int n, w, h;
	scanf("%d %d %d", &n, &w, &h);
	for(int i = 0; i < n; i++){
		int match;
		scanf("%d", &match);
		if(match*match <= (w*w)+(h*h)){
			printf("DA\n");
		}
		else{
			printf("NE\n");
		}
	}
	return 0;
}
