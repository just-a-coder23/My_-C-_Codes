#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,sum=0,c;
    printf("Please enter your number: ");
    scanf("%d",&a);
    while (a!=0)
    {
        b=a%10;
        a=a/10;
        sum=10*sum+b;
    }
    while (sum!=0)
    {
        c=sum%10;
        sum=sum/10;
        
        if (c==0)
        {
            printf("Zero ");
        }
        else if (c==1)
        {
            printf("One ");
        }
        else if (c==2)
        {
            printf("Two ");
        }
        else if (c==3)
        {
            printf("Three ");
        }
        else if (c==4)
        {
            printf("Four ");
        }
        else if (c==5)
        {
            printf("Five ");
        }
        else if (c==6)
        {
            printf("Six ");
        }
        else if (c==7)
        {
            printf("Seven ");
        }
        else if (c==8)
        {
            printf("Eight ");
        }
        else
        {
            printf("Nine ");
        }
        
        
    }
    
    
    return 0;
}
