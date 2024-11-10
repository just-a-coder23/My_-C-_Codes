#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,j,k,l,m,n;
    printf("Please enter the number of rows you want: ");
    scanf("%d",&a);
    printf("The required Pascal's Triangle is: \n");
    for (i = 1; i <=a; i++)
    {
        for (n = 1; n <= a-i; n++)
        {
            printf(" ");
        }
        printf("1 ");
        for (j = 1; j < i; j++)
        {
            int prod1=1,prod2=1,prod3=1;
            for (k = 1; k <= i-1; k++)
            {
                prod1*=k;
            }
            for (l = 1; l <= j;l++)
            {
                prod2*=l;
            }
            for (m = 1; m <=i-1-j ; m++)
            {
                prod3*=m;
            }
            printf("%d ",prod1/(prod2*prod3));
        }
        printf("\n");
        
    }
    
    return 0;
}
