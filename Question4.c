#include<stdio.h>
int main()
{
    float area,radius;
    printf("Enter Radius\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle is %f and radius is %f",area,radius);
    return 0;
}