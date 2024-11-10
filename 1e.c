#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,prod=1;
    printf("Please enter the base: ");
    scanf("%f",&a);
    printf("Please enter the power(Note: Please enter an integer): ");
    scanf("%f",&b);
    if (b<0)
    {
        for (int i = 1; i <= -b; i++)
        {
           prod*=(float)1/ (float)a;
        }
        printf("The value of %d^%d is %f",(int)a,(int)b,prod);
    }
    else if (b==0)
    {
        printf("The value of %d^%d is 1",a,b);
    }
    else
    {
        for (int i = 1; i <= b; i++)
        {
            prod*=a;
        }
        printf("The value of %f^%f is %f",a,b,prod);
    }
    return 0;
}
