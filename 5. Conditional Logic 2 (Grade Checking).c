#include<stdio.h>
int main()
{
    int marks;

    printf("Enter the mark of the student: ");

    scanf("%d",&marks);

    if(marks>=80)
    {
        printf("A+");
    }
    else if(marks>=70)
    {
        printf("A");
    }
    else if(marks>=60)
    {
        printf("A-");
    }
    else if(marks>=50)
    {
        printf("B");
    }
    else if(marks>=40)
    {
        printf("C");
    }
    else if(marks>=0)
    {
        printf("F");
    }
    else
    {
        printf("Absent");
    }
    printf("\nDone!!!\n");
    return 0;
}
