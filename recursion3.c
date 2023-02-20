#include<stdio.h>
int fact(int n);
int main()
{
    printf("factorial is %d",fact(7));
    return 0;
}
//recursive function
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    int factnm1=fact(n-1);
    int factn=factnm1*n;
    return factn;
}