#include <stdio.h>
int main(){
    float basic_salery, hr, da, gross_salery;
    printf("Enter the basic_salery:");
    scanf("%f", &basic_salery);
    printf("enter the hr:");
    scanf("%f", &hr);
    printf("enter the da:");
    scanf("%f", &da);
    gross_salery = basic_salery + hr + da;
    printf("the gross_salery is=%f\n",gross_salery);
    
    return 0;
}