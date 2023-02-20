#include <stdio.h>
#include <stdlib.h>

char *name;
struct cricketer
{
    char name[50];
    int age;
    int match;
    int avg;
} cter;


void details(struct crickter *s,int n, char *name)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].name==name)
        printf("%s\n",s[i].name);
        printf("%d\n",s[i].age);
        printf("%d\n",s[i].match);
        printf("%d\n",s[i].avg);
    }
}

int main()
{
    struct cricketer *s;
    s=(struct cricketer*)malloc(20*sizeof(struct cricketer));
    printf("Enter the number of cricketers:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the name, age, Number of matches and avg runs:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%d",&s[i].match);
        scanf("%d",&s[i].avg);
        
    }
 
    
    

    name = (char *)malloc(20 * sizeof(char));

    

    free(s);
    free(name);
    return 0;
}