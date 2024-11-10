#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c=0,e,f;
    printf("Please enter number: ");
    scanf("%d",&a);
    int d=0;
    if (a>0)        
    {
        for (int i = 1; i < a; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                b=i*i*i+j*j*j;
                if (a==b)
                {
                    e=i;
                    f=j;
                    c+=1;
                    if (c>1)
                    {
                        d=1;
                    }
                }
            }
        }
        if (d==0)
        {
            printf("%d is not a Ramanujan Number",a);
        }
        else
        {
            printf("%d is a Ramanujan Number",a);
            printf("\n%d is sum of cubes of %d and %d",a,e,f);
        }
    }
    return 0;
}
