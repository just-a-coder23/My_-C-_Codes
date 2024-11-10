#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b;
    int yes;
    char c;
    start:
    printf("Please enter the two numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Please enter the Operator\nFor Addition enter +  For Multiplication enter *  For Subtraction enter -  For Division enter /\n");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("%f + %f = %f",a,b,a+b);
        break;
    case '-':
        printf("%f - %f = %f",a,b,a-b);
        break;
    case '*':
        printf("%f * %f = %f",a,b,a*b);
        break;
    case '/':

        if (b!=0)
        {
            printf("%f / %f = %f\n",a,b,a/b);
        }
        else
        {
            printf("Undefined");
        }
    }
    printf("\nIf you want to continue using the calculator, enter 1, else enter any character other than 1: ");
    scanf("%d",&yes);
    if (yes==1)
    {
       goto start;
    }
    return 0;
}    