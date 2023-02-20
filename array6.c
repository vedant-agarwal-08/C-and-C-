#include <stdio.h>
void oddeven(int arr[],int n);
void printoddeven(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6};
    oddeven(arr,6);
    return 0;
}
void printoddeven(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void oddeven(int arr[],int n){
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("even number %d\n",arr[i]);
        }
        else{
            printf("odd number%d\n",arr[i]);
        }
    }
}