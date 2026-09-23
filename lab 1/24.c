#include <stdio.h>
int main() {
    double x, y;
    int n;
    printf("Enter the value of x and n: ");
    scanf("%lf%d",&x,&n);
    switch(n) {
        case 1: y=1+x; 
        break;
        case 2: y=1+x/n; 
        break;
        case 3: y=1+x*n;
         break;
        default: y=1+n*x;
         break;
    }
    printf("Y = %f\n",y);
    return 0;
}
