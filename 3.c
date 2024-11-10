#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Please enter the year: ");
    scanf("%d",&a);
    if (a%4==0)
    {
        if (a%100==0)
        {
            if (a%400==0)
            {
                printf("%d is a leap year.");
            }
            else
            {
                printf("%d is NOT a leap year.");
            }
        }
        else
        {
            printf("%d is a leap year.");
        }

        
    }
    
    
    return 0;
}
