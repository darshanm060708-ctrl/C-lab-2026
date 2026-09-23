#include<stdio.h>
int main (){
double n1,n2;
char operetor;//(+,-,/,*)
printf("enter two number and an operetor:");
scanf("%lf %lf %c", &n1, &n2 , &operetor);
switch(operetor){
    case '+' : printf("%lf + %lf = %lf\n", n1,n2,n1+n2);
    break;
    case '-' :printf("%lf - %lf =%lf\n", n1,n2,n1-n2);
    break;
    case '*' :printf("%lf * %lf =%f\n",n1,n2,n1*n2);
    break;
    case '/' :
    if(n2 != 0)
    printf("%lf / %lf =%lf\n",n1,n2,n1/n2);
    
    else
     printf("error! division by zero.\n");
     break;
     default :
     printf(" error!operetor is incorrect.\n");

}
return 0;

}