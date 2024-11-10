#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float sum=0;
    printf("Please enter the number of units of electricity consumed: ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Please enter valid number of units of electricity");
    }
    else
    {
        for (int i = 1; i <=a; i++)
        {
            if (i<=50)
            {
                sum+=0;
            }
            else if (i<=150)
            {
                sum+=1;
            }
            else if (i<=300)
            {
                sum+=1.5;
            }
            else
            {
                sum+=2.5;
            }
        }
        printf("The total amount to be charged is %.2f rupees",sum);
        
    }
    
    return 0;
}
