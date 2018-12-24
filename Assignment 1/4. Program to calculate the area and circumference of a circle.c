/*Write a program to read the radius of a circle and calculate its area and
circumference.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float r,pi,c,a;

    printf("\n");

    printf("Radius of the circle: ",r);
    scanf("%f",&r);

    pi= 3.1416;

    printf("\n");

    c= 2*pi*r;
    printf("Circumference of the circle is: %0.2f",c);

    printf("\n");

    a= pi*r*r;
    printf("\nArea of the circle is: %0.2f",a);

    printf("\n");

    return 0;
}
