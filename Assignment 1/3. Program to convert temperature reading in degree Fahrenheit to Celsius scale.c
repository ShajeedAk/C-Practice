/* Write a program to convert temperature reading in degree
Fahrenheit to degree Celsius scale using the formula:
C = (5/9)*(F-32)*/

#include<stdio.h>
#include<conio.h>

int main()
{
    double F,C;

    printf("\n");

    printf("Enter Farenheit value: ",F);
    scanf("%lf",&F);

    printf("\n");

    C= 0.56*(F-32);

    printf("\nDegree in Celsius scale: %0.2lf",C);

    printf("\n");

    return 0;
}
