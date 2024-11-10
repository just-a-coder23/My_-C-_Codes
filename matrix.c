#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y,i,j;
    printf("Please enter the following details about your matrix:\n ");
    printf("Rows: ");
    scanf("%d",&x);
    printf("Columns: ");
    scanf("%d",&y);
    int A[x][y];
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("Element %d,%d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}