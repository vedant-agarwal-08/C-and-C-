#include<stdio.h>
void Array_frequencycount();
void Array_display();
int main(){
    int length=9;
    int arr[length];
    Array_frequencycount();
    Array_display();
    return 0;
}

void Array_frequencycount(){
    int length;
    int arr[length];
    int fr[length];    
    int visited = -1; 
    
   for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
}     

void Array_display(){
    int length;
    int arr[length];
    int fr[length];    
    int visited = -1; 
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("  frequency");    
            printf("  %d\n", fr[i]);    
        }    
}
}
