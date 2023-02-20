#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character in uppercase or lowercase");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("lowercase");
    }
    else{
        printf("not valid");
    }
    return 0;
}