#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[10],i,j,k,b=0;
    int length=sizeof(A)/sizeof(A[0]);
    printf("Please enter 10 numbers of the array: \n");
    for ( i = 0; i < length; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("The unique element/elements of the given array of numbers is/are: \n");
    for ( j = 0; j <length ; j++)
    {
        b=0;
        for ( k = 0; k <length; k++)
        {
            if (j!=k)
            {
                if (A[j]==A[k])
                {
                    b++;
                    break;
                }
            }
        }
        if (b==0)
        {
            printf("%d  ",A[j]);
        }
    }
    return 0;
}
