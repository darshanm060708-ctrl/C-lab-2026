#include <stdio.h>
int main() {
    long long n;
    int sum;
    printf("Enter N: ");
    scanf("%lld",&n);
    if(n<0) n=-n;
    do {
        sum=0;
        while(n>0) {
            sum += (int)(n%10);
            n/=10;
        }
        n=sum;
    } while(sum>=10);
    printf("Single digit answer = %d\n",sum);
    return 0;
}
