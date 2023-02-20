//The value at address would be changed by this program
#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=3, y=5;
    swap(&x,&y);
    printf("x=%d and y=%d",x,y);
    return 0;

}

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}