#include <stdio.h>
int main() {
    int n,i,x,max,min;
    printf("Enter N: ");
    scanf("%d",&n);
    if(n<=0) { printf("N must be positive.\n"); return 0; }
    printf("Enter %d numbers: ",n);
    scanf("%d",&x);
    max=min=x;
    for(i=1;i<n;i++) {
        scanf("%d",&x);
        if(x>max) max=x;
        if(x<min) min=x;
    }
    printf("Maximum = %d\nMinimum = %d\n",max,min);
    return 0;
}
