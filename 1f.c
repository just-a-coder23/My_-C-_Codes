#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Please enter two numbers: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d and %d are the swaped numbers.",a,b);
    return 0;
}
