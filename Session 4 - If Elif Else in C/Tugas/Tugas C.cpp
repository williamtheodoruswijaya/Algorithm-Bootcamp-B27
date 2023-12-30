#include <stdio.h>

int main() {
    int A, B, C;
    printf("Masukkan 3 angka untuk variable A, B, dan C:\n");
    scanf("%d %d %d", &A, &B, &C);
    if(A!=B && A == C){
        printf("Yes\n");
    }
        else if(A==B && A!=C){
            printf("Yes\n");
        }
        else if(B==C && B!=A){
            printf("Yes\n");
        }
    else{printf("No\n");
    }
    return 0;
}
