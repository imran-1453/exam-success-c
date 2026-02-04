#include <stdio.h>
#include <stdlib.h>

int A[2][4]={{10,20,30,40},{5,15,25,35}};

int main()
{
    int buyuk=A[0][0];
    int kucuk=A[0][0];
    for(int i=0;i<2;i++)
    {
        for(int k=0;k<4;k++)
        {
            if(A[i][k]>buyuk)
            {
                buyuk=A[i][k];
            }
            if(A[i][k]<kucuk)
            {
                kucuk=A[i][k];
            }

        }
    }
    printf("en buyuk:%d | en kucuk:%d",buyuk,kucuk);
}
