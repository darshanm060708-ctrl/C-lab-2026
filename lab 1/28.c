#include <stdio.h>
int main() {
    int n,temp,digit,count=0;
    long long sum=0,power;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0) { printf("Not Armstrong\n"); return 0; }
    temp=n;
    if(temp==0) count=1;
    while(temp>0) { count++; temp/=10; }
    temp=n;
    while(temp>0) {
        digit=temp%10;
        power=1;
        for(int i=0;i<count;i++) power*=digit;
        sum+=power;
        temp/=10;
    }
    printf("%s\n",(sum==n) ? "Armstrong" : "Not Armstrong");
    return 0;
}
