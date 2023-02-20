#include <stdio.h>
void arrayrev(int arr[])
{
    int temp,i;
    for(i=0; i<7/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
}
void arrayprint(int arr[])
{
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1 ,2 ,3 ,4 ,5 ,6 ,7};
    arrayrev(arr);
    arrayprint(arr);
    return 0;
}