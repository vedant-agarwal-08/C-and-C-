#include<stdio.h>
int main()
{
    char c,s[50],sen[100];
    scanf("%c",&c);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&sen);
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}