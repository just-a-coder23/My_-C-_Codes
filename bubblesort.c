#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A[1000], a, i, j, k, x,l;
    printf("Please enter the number of elements you want in your array: ");
    scanf("%d", &a);
    printf("Please enter the %d numbers:", a);
    printf("\n-----------------------------\n");
    for (i = 0; i < a; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d", &A[i]);
    }
    for (j = 0; j < a - 1; j++)
    {
        for (k = 0; k < a - 1 - j; k++)
        {
            if (A[k] > A[k + 1])
            {
                x = A[k];
                A[k] = A[k + 1];
                A[k + 1] = x;
            }
        }
    }
    printf("The sorted array is: \n");
    for ( l = 0; l < a; l++)
    {
        printf("%d  ",A[l]);
    }
    return 0;
}
