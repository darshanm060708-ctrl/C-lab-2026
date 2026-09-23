#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three number:");
    scanf("%d %d %d",&a ,&b ,&c);
    a>b && a>c ? printf("max value %d",a) : 1;
    b>a && b>c ? printf("max value %d",b) : 1;
    c>a && c>b ? printf("max value %d",c) : 1;
    return 0;
}