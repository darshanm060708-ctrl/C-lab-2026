#include <stdio.h>
int main() {
    int n,temp,rev=0,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0) { printf("Not Palindrome\n"); return 0; }
    temp=n;
    while(temp>0) {
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    printf("%s\n",(rev==n) ? "Palindrome" : "Not Palindrome");
    return 0;
}
