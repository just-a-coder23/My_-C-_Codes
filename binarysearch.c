#include<stdio.h>
int binarysearch(int A[],int n,int m)
{
    if (m==A[n])
    {
        return n;
    }
    else
    {
        binarysearch(A,n-1,m);
    }
}
int main(int argc, char const *argv[])
{
    int size,i,x;
    printf("Please enter the size of the array: ");
    scanf("%d",&size);
    int A[size];
    for ( i = 0; i < size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Target: ");
    scanf("%d",&x);
    printf("Location of target is %d",binarysearch(A,size,x));
    return 0;
}
