#include<stdio.h>
int fibseq(int num)
{
        if (num==0 || num==1)
        {
                return num;
        }
        else
        {
                return (fibseq(num-1) + fibseq(num-2));
        }
}
int main(int argc, char const *argv[])
{
        int num,i;
        printf("Please enter the number of terms you want in your fibonacci sequence: ");
        scanf("%d",&num);
        printf("The Fibonacci sequence is: \n");
        for ( i = 0; i < num; i++)
        {
                printf("%d ",fibseq(i));
        }
        
        return 0;
}
