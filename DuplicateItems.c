#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A[100000],n,i,c=0,j,k,x;
    printf("Please enter the number of elements you want in your array: ");
    scanf("%d",&n);
    printf("\n--------------------------------------------------\n");
    printf("Please enter the values of the elements: \n");
    for ( i = 0; i < n; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&A[i]);
    }
    for ( j = 0; j < n; j++)
    {
        if (A[j]==x)
        {
            break;
        }
        
        for (k = 0; k < j; k++)
        {
            if (A[j]==A[k])
            {
                x=A[j];
                c++;
                break;
            }
            
        }
        
    }
    printf("The number of element/elements that occur more than once is/are: %d",c);
    
    
    return 0;
}
