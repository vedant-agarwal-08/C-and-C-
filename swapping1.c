
//The value in the address won't be changed by this program
#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a=3,b=5;
    swap(a,b);
    
    return 0;

}

//call by value
void swap (int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d",a,b);
}