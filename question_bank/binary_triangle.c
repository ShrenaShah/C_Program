#include<stdio.h>
int main()
{
    for(int i = 1; i<=4; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            if(i%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}