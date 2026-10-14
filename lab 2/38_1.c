#include <stdio.h>
int main() {
    int n,i;
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("the series is:\n");
    
    for  (i = 1; i<=n; i++){
        printf("%d\n",i*i);

    }
    return 0;
}