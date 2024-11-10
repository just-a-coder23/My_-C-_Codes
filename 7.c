#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("Please enter the number till where you want the Pythagorean Triplets: ");
    scanf("%d",&a);
    if (a<=0)
    {
        printf("No Pythagorean triplets exist");
    }
    else
    {
        for (int i = 1; i <=a; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                c=i*i+j*j;
                for (int k = 1; k <= a; k++)
                {
                    if (c%k==0)
                    {
                        d=c/k;
                        if (d==k)
                        {
                            printf("%d,%d,%d\n",i,j,k);
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    printf("The above are the required Pythagorean Triplets");
    return 0;
}
