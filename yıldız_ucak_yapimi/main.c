#include <stdio.h>
#include <stdlib.h>

int N,i,k;

int main()
{
    printf("kac yildiz olacak: ");
    scanf("%d",&N);

    for(i=0;i<=N;i++)
    {
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=N;0<i;i--)
    {
        for(k=i;0<k;k--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
