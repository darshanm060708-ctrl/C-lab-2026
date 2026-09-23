#include <stdio.h>
int main() {
    int n, i;
     long f45act=1;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    if (n < 0) 
    printf("Factorial is not defined for negative numbers.\n");
    else if (n > 20)
     printf("Number too large for long.\n");
    else {
        for(i=1;i<=n;i++) fact*=i;
        printf("Factorial = %ld\n",fact);
    }
    return 0;
}
