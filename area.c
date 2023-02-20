#include<stdio.h>
int main()
{
    float s,area,radius,circumference;
    printf("Enter side s:");
    scanf("%f",&s);
    area=s*s;
    printf("The area of square is %f\n",area);

    printf("Enter radius:");
    scanf("%f",&radius);
    circumference=2*3.14*radius;
    printf("Circumference is %f\n",circumference);
    return 0;
}