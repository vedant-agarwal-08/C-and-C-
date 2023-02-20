#include<stdio.h>
#include<conio.h>
struct student{
    int rollno,tot;
    char name[25];
    int mark[5];
};
void main(){
    struct student s[5];
    int i,n,j;
    printf("enter the number of students");
    scanf("%d",&n);
    printf("\t student records\n");
    for(i=0;i<n;i++){
        printf("enter student roll number");
        scanf("%d",&s[i].rollno);
        printf("enter student name");
        scanf("%d",&s[i].name);
        printf("enter student 3 subject marks");
        for(j=0;j<3;j++){
            scanf("%d",&s[i].mark);

        }
        

    }
}