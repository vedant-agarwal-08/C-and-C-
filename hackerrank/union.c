#include<stdio.h>
#include<conio.h>
 union s{
     char name[20];
     int marks;
     int rollno;
 };
 void main(){
     union s s1;
     s1.name='vedant';
     s1.marks=89;
     s1.rollno=23;
     printf("%c",s1.name);
     printf("%d",s1.name);
     printf("%d",s1.name);

 }
