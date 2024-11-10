#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c=0;
    printf("Please enter the beginning number: ");
    scanf("%d",&a);
    printf("Please enter the ending number: ");
    scanf("%d",&b);
    for (int i = a+1; i < b; i++)
    {
        if (i%2!=0 || i%3!=0)
        {
            printf("%d ",i);
            c+=1;
        }
    }
    printf("\nThe number of above integers is %d",c);
    
    return 0;
}
