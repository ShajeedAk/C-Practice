/*Write a program to compute the area of a triangle given the
values of A, B and C.
Using the formula: area = square_root(S(S-A) (S-B) (S-C))
where A, B, C are the sides of the triangle and 2S = A + B + C*/

#include<stdio.h>
#include<conio.h>
#include<math.h> /*For Exponential (Power Function)*/

int main()
{
    float A,B,C,S,ar;

    printf("\n");

    printf("Enter value of A: ",A);
    scanf("%f",&A);

    printf("\nEnter value of B: ",B);
    scanf("%f",&B);

    printf("\nEnter value of C: ",C);
    scanf("%f",&C);


    S= (A+B+C)/2;

    ar=pow(S*(S-A)*(S-B)*(S-C),0.5);

    printf("\nThe area of the triangle is: %0.2f",ar);

    printf("\n");

    return 0;
}

