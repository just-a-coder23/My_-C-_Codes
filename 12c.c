#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Please enter the number of rows you want: ");
    scanf("%d",&a);
    for (int i = 1; i<=a ; i++)
    {
        for (int j =i ; j < a; j++)
        {
            printf(" ");
        }
        for (int k =1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
