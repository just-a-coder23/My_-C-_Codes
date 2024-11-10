#include<stdio.h>
void sumandavg(int A[],int size,int *S,float *Av)
{
    *S=0;
    for (int i = 0; i < size; i++)
    {
        *S+=A[i]; 
    }
    *Av=*S/size;
}
int main(int argc, char const *argv[])
{
    int size,sum;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int A[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&i[A]);
    }
    sumandavg(A,size,&sum,&avg);
    printf("For the elements of the array,\nSum is %d\nAverage is %f",sum,avg);
    return 0;
}
