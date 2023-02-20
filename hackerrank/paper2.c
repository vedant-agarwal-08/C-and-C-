#include <stdio.h>
#include <stdlib.h>

char *name;
struct cricketer
{
    char name[50];
    int age;
    int match;
    int avg;
};
struct cricketer c[20],temp1;

	/* data */


int main()
{
    int i,j;
    struct cricketer *s;
    s = (struct cricketer *)malloc(5 * sizeof(struct cricketer));

    scanf("%s", &s[0].name);
    printf("%s\n", s[0].name);

    scanf("%d", &s[0].age);
    printf("%d\n", s[0].age);

    scanf("%d", &s[0].match);
    printf("%d\n",&s[0].match);

    scanf("%d", &s[0].avg);
    printf("%d\n", s[0].avg);

    // take values for all below var same as above
    // s[0].name , s[0].department, s[0].course, s[0].yoj

    name = (char *)malloc(20 * sizeof(char));

    free(s);
    for(i=0;i<2;i++) {
      for(j=i+1;j<2;j++) {
         if(c[i].avg > c[j].avg){
            temp1=c[i];
            c[i]=c[j];
            c[j]=temp1;
         }
      }
   }
   printf("Sorted records:\n");
   for(i=0;i<2;i++){
      printf("%d\t%s\t%d\t%d\t%f\n\n\n",i+1,c[i].name,c[i].age,c[i].match,c[i].avg);
   }
   
}
