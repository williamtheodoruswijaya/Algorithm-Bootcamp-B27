#include <stdio.h>

int main(){
	FILE *InputFile = fopen("./input.txt", "r");
	FILE *OutputFile = fopen("./Output.txt", "w");
	char greetings[100];
	while(fscanf(OutputFile, "%[^\n]", greetings) != EOF){
		fprintf(OutputFile, "%s\n", greetings); //printfnya harus diubah jadi fprintf dengan format kayak fscanf
	}
	fclose(OutputFile); //jangan lupa ditutup
	fclose(InputFile);
	return 0;
}
