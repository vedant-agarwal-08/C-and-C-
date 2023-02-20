#include<stdio.h>
int main()
{
    float price[3];
    printf("enter price one:-");
    scanf("%f",&price[0]);
    printf("enter price two:-");
    scanf("%f",&price[1]);
    printf("enter price three:-");
    scanf("%f",&price[2]);
    printf("total price=%f\n",price[0]+(0.18*price[0]));
    printf("total price=%f\n",price[1]+(0.18*price[1]));
    printf("total price=%f",price[2]+(0.18*price[2]));
    return 0;
    




}