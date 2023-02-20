#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter marks of chem");
    scanf("%d",&marks[0]);
    printf("Enter marks of phy");
    scanf("%d",&marks[1]);
    printf("Enter marks of maths");
    scanf("%d",&marks[2]);
    printf("marks chem=%d\nphy marks=%d\nmaths marks=%d\n",marks[0],marks[1],marks[2]);

}