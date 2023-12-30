#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char letters[1001];
		int Visited[26] = {0};
		scanf("%[^\n]", letters);
		getchar();
		
		for(int j = 0; letters[j] != '\0'; j++){
			
			if(letters[j]>='A' && letters[j] <= 'Z'){
				letters[j] = letters[j] - ('a' - 'A');
			}
		}
		
		for(int q = 0; letters[q] != '\0'; q++){
			if(letters[j]>='a' && letters[j] <= 'z'){
				int LetterIndex = letters[j] - 'a';
				Visited[LetterIndex] = 1; 
			}
		}
	}
	return 0;
}
