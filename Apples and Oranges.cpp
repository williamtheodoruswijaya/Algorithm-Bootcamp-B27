#include <stdio.h>

int main(){
    int CountApple = 0, CountOrange = 0;
    int s, t;
    scanf("%d %d", &s, &t);
    int a, o;
    scanf("%d %d", &a, &o);
    int m, n;
    scanf("%d %d", &m, &n);
    int apples[m], oranges[n];
    for(int i = 0; i < m; i++){
        scanf("%d", &apples[i]);
        if(a + apples[i] >= s && a + apples[i] <= t){
            CountApple++;
        }
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &oranges[i]);
        if(o + oranges[i] >= s && o + oranges[i] <= t){
            CountOrange++;
        }
    }
    printf("%d\n%d\n", CountApple, CountOrange);
    return 0;
}
