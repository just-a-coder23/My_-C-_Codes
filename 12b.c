#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Please enter the number of rows you want: ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = a-i; j <a ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
