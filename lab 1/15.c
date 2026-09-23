#include <stdio.h>
int main() {
    float a,b,c,d,e,total,percentage;
    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=total/5.0f;
    printf("Percentage = %f%%\n",percentage);
    if (percentage >= 60) printf("First Division\n");
    else if (percentage >= 50) printf("Second Division\n");
    else if (percentage >= 40) printf("Third Division\n");
    else printf("Fail\n");
    return 0;
}