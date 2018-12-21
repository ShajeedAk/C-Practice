#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    float f;
    double d;
    char c;

    printf("Input a character value:");
    scanf("%c",&c);

    printf("Input integer value:");
    scanf("%d",&a);

    printf("Input float value:");
    scanf("%f",&f);

    printf("Input double value:");
    scanf("%lf",&d);

    printf("\nInteger Value: %d\n",a);
    printf("Float Value: %0.2f\n",f);
    printf("Double Value: %0.4lf\n",d);
    printf("Character Value: %c\n",c);

    return 0;
}
