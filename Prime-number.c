#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,i,c=1;
    printf("Please enter the number: ");
    scanf("%d",&a);
    if (a<=1)
    {
        printf("%d is neither prime nor composite",a);
    }
    else
    {   if (a==2)
        {
            printf("2 is a prime number");
        }
        else
        {
    
            for ( i = 2; i < a/2; i++)
            {
                if (a%i==0)
                {
                    c=0;
                    break;
                }
            } 
        if (c)
        {
            printf("%d is a prime number",a);
        }
        else
        {
            printf("%d is not a prime number",a);
        }
        }
    return 0;
    } 
}       
