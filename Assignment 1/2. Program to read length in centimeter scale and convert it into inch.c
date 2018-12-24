/*Write a program to read length in
centimeter scale and convert it into inch
scale.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float cm,inch;

    printf("\n");

    printf("Enter measurement(cm): ",cm);
    scanf("%f",&cm);

    printf("\n");

    inch= cm/2.54;
    printf("Measurement in inch: %0.2f\n",inch);

    return 0;
}
