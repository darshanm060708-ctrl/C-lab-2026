#include <stdio.h>
int main() {
    int n,i,evenSum,oddSum;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        if(i%2==0) evenSum+=i;
        else oddSum+=i;
    }
    printf("Sum of even numbers = %d\n",evenSum);
    printf("Sum of odd numbers = %d\n",oddSum);
    return 0;
}
