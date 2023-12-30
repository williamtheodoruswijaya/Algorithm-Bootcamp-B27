#include <stdio.h>

struct Tunnel{
	int length;
	int width;
	int height;
};

void Volume(int length, int width, int height){
	int volume = length * width * height;
		if(height < 41){
			printf("%d\n", volume);
		}
}

int main(){
	int n;
	scanf("%d", &n);
	struct Tunnel boxes[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
		Volume(boxes[i].length, boxes[i].width, boxes[i].height);
	}
	return 0;
}
