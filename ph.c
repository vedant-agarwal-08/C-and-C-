#include<stdio.h>
int main()
{
    int ph;
    printf("enter ph");
    scanf("%d",&ph);
    if(ph>12){
        printf("very alkaline");
    }
    else if(ph>=2 && ph<=7){
        printf("acidic");

    }
    
    else if(ph<2){ 
        printf("very acidic");

    }
    
    else if(ph>=7 && ph<=12){
        printf("alkaline");

    }
    else{
        printf("neutral");
    }
    return 0;
}