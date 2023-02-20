#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>90){
        printf("A+");
    }
    else if(marks>80 && marks<90){
        printf("A");
    
    }
    else{
        printf("fail");
    }
    return 0;
}