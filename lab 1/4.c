#include <stdio.h>
int main(){
    float celcius , fahrenheit;
    printf("enter the fahrenheit:");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit-32)*5/9;
    printf("the celcius is%f",celcius);
    return 0;


}