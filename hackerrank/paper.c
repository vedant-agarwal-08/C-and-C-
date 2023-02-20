#include<stdio.h>
#include<stdlib.h>

int main()
{
 
    
    int* ptr;
    int  i;
 
    
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(20 * sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < 20; i++) {
           printf("enter the value no. %d of this array\n",i);
           scanf("%d",&ptr[i]);
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < 20; i++) {
            printf("%d ", ptr[i]);
        }
    }
    int ptr[i];
    int size=sizeof(ptr)/sizeof(ptr[0]);
    sort(ptr,size);
    printarray(ptr,size);
 
    return 0;
}

void sort(int ptr[],int size)
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1;j++)
        {
            if (ptr[j]>ptr[j+1])
            {
                int temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
}

void printarray(int ptr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",ptr[i]);
    }
}

