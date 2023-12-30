#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    for(int i = 1; i <= z; i++){
        printf("%d\n", i);
        if(i % x == 0){
            puts("Fizz");
        }
        else if(i % y == 0){
            puts("Buzz");
        }
        else if(((i % x) && (i % y)) == 0){
            puts("Fizzbuzz");
        }
    }
    return 0;
}