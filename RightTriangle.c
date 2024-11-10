#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,k=1;
    printf("Please enter the number of rows you want to see: ");
    scanf("%d", &a);
    printf("A right triangle formed using natural numbers in %d rows: \n",a);
    for (int i = 1; i <= a; i++)
    {   for (int j = 1; j <= i;j++ )
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}