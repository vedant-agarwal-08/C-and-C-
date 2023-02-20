#include<stdio.h>
int main()
{
    int sum,diff;
    float sum1,diff1;
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    sum=a+b;
    diff=a-b;
    sum1=c+d;
    diff1=c-d;
    printf("%d %d\n",sum,diff);
    printf("%.2f %.2f",sum1,diff1);
    return 0;
}