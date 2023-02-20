#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    printarr(arr,7);
    return 0;
}
void printarr(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}
