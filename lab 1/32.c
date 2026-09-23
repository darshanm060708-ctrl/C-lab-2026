#include <stdio.h>
#include <limits.h>
int main() {
    int n,i,x,max=INT_MIN,second=INT_MIN;
    printf("Enter N: ");
    scanf("%d",&n);
    if(n<2) { printf("At least two numbers are required.\n"); return 0; }
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        if(x>max) { second=max; max=x; }
        else if(x>second && x<max) second=x;
    }
    if(second==INT_MIN) printf("No distinct second maximum exists.\n");
    else printf("Maximum = %d\nSecond Maximum = %d\n",max,second);
    return 0;
}
