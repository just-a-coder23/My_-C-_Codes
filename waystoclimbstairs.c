#include<stdio.h>
int countways(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return countways(n-1) + countways(n-2);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter the number of stairs: ");
    scanf("%d",&n);
    printf("The number of ways to climb %d stairs is %d",n,countways(n));
    return 0;
}
