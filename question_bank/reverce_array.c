#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter any five elements: ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=4; j>-1; j--)
    {
        printf("%d",arr[j]);
    }
    return 0;
}