#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    float avg;
    avg=(a+b+c)/3;
    printf("Avg is %f",avg);
    return 0;


}