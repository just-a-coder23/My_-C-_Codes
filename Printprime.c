#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, i, b;
    printf("Please enter the number: ");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("No prime numbers exist before %d and %d is not a prime number to", a, a);
    }
    else if (a == 2)
    {
        printf("The prime numbers from 1 to 2 are 2");
    }
    else
    {
        for (i = 2; i <= a; i++)
        {   int c=1;
            for (b = 2; b < i; b++)
            {
                if (i%b==0)
                {
                   c=0;
                }
                
            }
            if (c==1)
            {
                printf("%d, ",b);
            }
            
        }
    }
    
    {
        printf("\nThe above numbers are prime numbers between 1 and the number you gave");
    } 
    return 0;
}
