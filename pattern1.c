#include<stdio.h>
int main()
{
    char ch='*';
    for(int j=1;j<=5;j++)
    {
        for (int i=1;i<=6;i++)
        {
        if(i==6)
        {
            break;
        }
        printf("%c ",ch);
    }
        printf("\n");
    }
    
    return 0;
}