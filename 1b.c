#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,c=1;
    printf("Please enter the number: ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Factorial does not exist for %d",a);
    }
    
    else
    {
        for ( i = 1; i <= a; i++)
    {
        c = c*i;
    }
    
    printf("The factorial of %d is %d",a,c);
    }
    return 0;
}