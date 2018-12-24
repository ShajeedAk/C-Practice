/*Write a program to find the addition, subtraction,
multiplication and division of two integers.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float a,b,c;

    printf("\n");

    printf("Enter the first integer: ",a);
    scanf("%f",&a);

    printf("Enter the second integer: ",b);
    scanf("%f",&b);

    printf("\n");
    c= a+b;
    printf("\nYour required result for addition: %.0f",c);

    printf("\n");
    c= a-b;
    printf("\nYour required result for subtraction: %.0f",c);

    printf("\n");
    c= a*b;
    printf("\nYour required result for multiplication: %.0f",c);

    printf("\n");
    c= a/b;
    printf("\nYour required result for division: %0.2f",c);

    printf("\n");

    return 0;
}







