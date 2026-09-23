#include <stdio.h>
int main() {
    double base, result=1;
    int exponent, i;
    printf("Enter base and  exponent: ");
    scanf("%lf%d",&base,&exponent);
    if (base==0 && exponent<0) {
        printf("Undefined.\n");
        
    }
    else if (exponent>=0) {
        for(i=0;i<exponent;i++) result*=base;
    } else {
        for(i=0;i<-exponent;i++) result*=base;
        result=1/result;
    }
    printf("Power = %f\n",result);
    return 0;
}
