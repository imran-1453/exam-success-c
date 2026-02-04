#include <stdio.h>
#include <stdlib.h>

int N;

int main()
{
    printf("N girin:");
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=N;0<i;i--)
    {
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
