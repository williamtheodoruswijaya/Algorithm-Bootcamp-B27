#include <stdio.h>

#define size 10

int stack[size];
int top = -1; 
/*
Initializing the top value to -1 to ensure the top is empty at the beginning which's indicated by -1 value
If the top have been filled with a value, it will increased to 0 which indicates the first array have been filled by some value.
*/

void Push(int value){
	if(top < size-1){
		stack[++top] = value;
	}
	else{
		printf("The stack is full!\n");
	}
}

int Pop(){
	if(top >= 0){
		int PopValue = stack[top];
		top--;
		return PopValue;
	}
	else{
		return -1;
	}
}

int Peek(){
	if(top >= 0){
		int PeekValue = stack[top];
		return PeekValue;
	}
	else{
		printf("I can't peek anything!, the stack is Empty lol");
		return -1;
	}
}

void isEmpty(){
	if(top == -1){
		printf("The stack is Empty!\n");
	}
	else{
		printf("The stack is NOT Empty!\n");
	}
}

int main(){
	for(int i = 1; i < size+3; i++){
		Push(i);
	}
	
	printf("Peek Value: %d\n", Peek());
	printf("Popped Value: %d\n", Pop());
	isEmpty();
	
	printf("Peek Value: %d\n", Peek());
	printf("Popped Value: %d\n", Pop());
	isEmpty();
	
	printf("Peek Value: %d\n", Peek());
	isEmpty();
	printf("Popped Value: %d\n", Pop());
	isEmpty();
	
	printf("Popped Value: %d\n", Pop());
	isEmpty();
	printf(" Peek Value: %d\n", Peek());
	return 0;
}
