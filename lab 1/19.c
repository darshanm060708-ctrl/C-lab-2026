#include<stdio.h>
int main(){
    char ch;
    printf("enter the charecter :");
    scanf("%c",&ch);
    (ch>='a' && ch<='z') ? printf("the small case") :printf("not small case");
    return 0;  
}