#include <stdio.h>
int main(){
    float m1, m2, m3, m4, m5, total, percentage;
    printf("enter the marks of m1 out of 100:\n");
    scanf("%f",&m1);
    printf("enter the marks of m2 out of 100:\n");
    scanf("%f",&m2);
    printf("enter the marks of m3 out of 100:\n");
    scanf("%f",&m3);
    printf("enter the marks of m4 out of 100:\n");
    scanf("%f",&m4);
    printf("enter the marks of m5 out of 100:\n");
    scanf("%f",&m5);
    total = m1 + m2 + m3 + m4 + m5;
    printf(" total mark obtain out of 500 is=%f\n", total);
    percentage = total /5;
    printf("your percentage is =%f\n", percentage);
    
  
 return 0;
}