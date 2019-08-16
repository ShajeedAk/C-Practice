#include<stdio.h>
#include<math.h>

int main()
{
    int n,root,i;
    printf("Enter the number: \n");
    scanf("%d",&n);

    root=sqrt(n);

    int key=0;

    if(n==1)
    {
        printf("%d is not prime\n",n);
        return 0;
    }

    for(i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            printf("%d is not prime\n",n);
            key=1;
            break;
        }
    }
    if(key==0)
            printf("%d is prime\n",n);

    return 0;
}
