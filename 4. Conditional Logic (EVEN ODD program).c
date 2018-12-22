
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d",&n); //input

    printf("\n");

    if(n%2==0) // condition checking
    {
        printf("%d is even\n",n);
    }
    else
    {
        printf("%d is odd\n",n);
    }
    return 0;
}
