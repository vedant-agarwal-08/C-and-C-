#include<stdio.h>
#include<conio.h>
struct a{
    char name[20];
    float marks;
    int rollno;
}a3;

void main(){
    struct a a1= {"vedant",50,21};
    struct a a2= {"souvik",59,20};
    a3.name='juan';
    a3.marks=89.5;
    a3.rollno=9;
    

    printf("name%s\n",a1.name);
    printf("name%f\n",a1.marks);
    printf("name%d\n",a1.rollno);
    printf("name%s\n",a2.name);
    printf("name%f\n",a2.marks);
    printf("name%d\n",a2.rollno);
    printf("name%s\n",a3.name);
    printf("name%f\n",a3.marks);
    printf("name%d\n",a3.rollno);
}