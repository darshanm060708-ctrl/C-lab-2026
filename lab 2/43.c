#include<stdio.h>
int main()
{
    int sales;
    printf("Enter the sales: ");
    scanf("%d",&sales);

    float commission;
    if(sales<=500){
    commission=sales*0.05;
    printf("commision:%f",commission);}

    else if(sales>500 && sales<=2000){
        commission=35+(sales*0.1);
        printf("commision:%f",commission);

    }
    else if (sales>2000 && sales<=5000)
    {
        commission=185+(sales*0.12);
        printf("commision:%f",commission);
    }
    else if (sales>5000)
    {
        commission=sales*0.125;
        printf("commision:%f",commission);
    }
    
    
return 0;
}