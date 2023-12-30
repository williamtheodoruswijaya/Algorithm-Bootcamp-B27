#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 26

struct node{
	char nama[51];
	char password[21];
	struct node* prev;
	struct node* next;
}*head[SIZE], *tail[SIZE];

struct node* createNode(char nama[], char password[]){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	strcpy(newNode->nama, nama);
	strcpy(newNode->password, password);
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void insertData(char nama[], char password[]){
	struct node* user = createNode(nama, password);
	
	// 1. indexing
	int index = nama[0] - 'A';
	
	// if there is no data (no collision may happen)
	if(head[index] == NULL){
		head[index] = user;
		tail[index] = user;
	}
	
	// 2. if there is a collision, push Tail
	else{
		tail[index]->next = user;
		user->prev = tail[index];
		tail[index] = user;
	}
}

void printAll(){
	for(int i = 0; i < SIZE; i++){
		if(head[i] != NULL){
			struct node* curr = head[i];
			printf("%d ", i);
			while(curr != NULL){
				printf("-> %s %s ", curr->nama, curr->password);
				curr = curr->next;
			}
			printf("\n");
		}
	}
}

void popHead(int index){
	if(head[index] == NULL){
		printf("Data is empty! Can't Delete!\n\n");
		return;
	}
	else if(head[index] == tail[index]){
		struct node* temp = head[index];
		head[index] = NULL;
		tail[index] = NULL;
		free(temp);
		return;
	}
	else{
		struct node* temp = head[index];
		head[index] = head[index]->next;
		head[index]->prev = NULL;
		temp->next = NULL;
		free(temp);
		return;
	}
}

void popTail(int index){
	if(tail[index] == NULL){
		printf("Data is empty! Can't Delete!\n\n");
		return;
	}
	else if(head[index] == tail[index]){
		struct node* temp = head[index];
		head[index] = NULL;
		tail[index] = NULL;
		free(temp);
		return;
	}
	else{
		struct node* temp = tail[index];
		tail[index] = tail[index]->prev;
		temp->prev = NULL;
		tail[index]->next = NULL;
		free(temp);
		return;
	}
}

void popMid(char nama[])

int main(){
	insertData("King Arthur", "1235asd");
	insertData("Anna Mary", "noBarbatoes");
	insertData("Arthur Pendragon", "optimusPrime");
	printAll();
	
	char letter;
	printf("Enter the characters you want to pop: ");
	scanf(" %c", &letter);
	int index = letter - 'A';
	printAll();
	return 0;
}
