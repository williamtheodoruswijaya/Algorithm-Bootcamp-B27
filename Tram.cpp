#include <stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	int total_passenger = 0, MaximumCapacity = 0;
	for(int i = 0; i < n; i++){
		int exit, enter;
		scanf("%d %d", &exit, &enter);
		total_passenger = total_passenger - exit + enter;
		if(total_passenger > MaximumCapacity){
			MaximumCapacity = total_passenger;
		}
	}
	printf("%d\n", MaximumCapacity);
	return 0;
}
