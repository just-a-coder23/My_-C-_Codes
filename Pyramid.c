#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b=1,row=1;
    printf("Please enter the number of rows you want to see: ");
    scanf("%d",&a);
    for (int i = a; i >0; i--)
    {   
        for (int k = i-1; k > 0; k--)
            {
                printf(" ");} 
                
                for (int j = 1; j <=b ; j++)
                { 
                    printf("%d ",row);
                    row+=1;
                }
                b+=1;
        printf("\n");
        
    }
    
    return 0;
}
