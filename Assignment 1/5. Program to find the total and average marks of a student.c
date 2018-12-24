/*X, Y, Z are the marks of a student. Write a program to find the
total and average marks of the student.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    float X,Y,Z,T,A;

    printf("\n");

    printf("Enter the value of X: ",X);
    scanf("%f",&X);

    printf("\n");

    printf("Enter the value of Y: ",Y);
    scanf("%f",&Y);

    printf("\n");

    printf("Enter the value of Z: ",Z);
    scanf("%f",&Z);

    printf("\n");

    /*Total marks,*/ T= X+Y+Z;

    printf("\nTotal marks of the student is: %.0f",T);

    printf("\n");

    /*Average Marks,*/ A= (T/3);

    printf("\nAverage marks of the student is: %0.2f",A);

    printf("\n");

    return 0;
}
