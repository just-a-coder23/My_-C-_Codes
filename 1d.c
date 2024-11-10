#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,sum=(float)0,c;
    char x,yes='Y';
    start:
    printf("Please enter number of terms whose sum you want: ");
    scanf("%f",&a);
    if (a<=0)
    {
        printf("Please enter correct value.\nDo you want to rerun the Program?\nIf YES enter Y: ");
        scanf(" %c",&x);
        if (x=='Y')
        {
            goto start;
        }
        else
        {
            goto end;
        }
    }
    else
    {
        for (float i = 1; i <=a; i++)
        {
            c=(float)1/(float)i;
            sum+=c;
        }
        printf("Sum of the series till required terms is %f",sum);
    }
    end:
    return 0;
}
