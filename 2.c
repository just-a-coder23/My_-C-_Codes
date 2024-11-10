#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,sum=0;
    printf("Please enter the number: ");
    scanf("%d",&a);
    c=a;
    while (c!=0)
    {
        b=c%10;
        sum+=b*b*b;
        c=c/10;
    }
    if (sum==a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
    
    return 0;
}
