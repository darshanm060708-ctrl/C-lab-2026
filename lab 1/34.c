#include <stdio.h>
int main() {
    int n,i,a=0,b=1,c;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("%d",a);
        if(i<n-1) printf(" ");
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
