#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[4];

    for(int i=0;i<4;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    int buyuk=A[0];
    int kucuk=A[0];


    for(int i=0;i<4;i++)
    {
        if(buyuk<A[i])
        {
            buyuk=A[i];
        }
        if(kucuk>A[i])
        {
            kucuk=A[i];
        }
    }

    printf("buyuk=%d \nkucuk=%d",buyuk,kucuk);

    return 0;
}
