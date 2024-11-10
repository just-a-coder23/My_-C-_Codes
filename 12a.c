#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Please enter the required number of rows: ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 1; j <i ; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= a; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
