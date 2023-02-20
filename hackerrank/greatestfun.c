#include<stdio.h>
void greatest(int a,int b,int c,int d);
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    greatest(a,b,c,d);
    return 0;
}
void greatest(int a,int b,int c,int d){
    if (a>b && a>c && a>d){
        printf("%d",a);
    }
    else if (b>a && b>c && b>d){
        printf("%d",b);
    }
    else if (c>b && c>a && c>d){
        printf("%d",c);
    }
    if (d>b && d>c && d>a){
        printf("%d",d);
    }
    
}