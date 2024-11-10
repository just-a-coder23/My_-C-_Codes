#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,sum=0,c;
    printf("Please enter the number: ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Please enter a positive number.");
    }
    else
    { 
        start:
        sum=0;
        while (a>0)
        {
            b=a%10;
            a=a/10;
            sum=sum+b;
        }
        if (sum>=10)
        {
            a=sum;
            goto start;
        }
            printf("Answer is %d",sum);
        
    }
    return 0;
}
