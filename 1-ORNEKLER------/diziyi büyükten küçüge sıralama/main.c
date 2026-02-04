#include <stdio.h>
#include <stdlib.h>

int N;

int dizi_islem(int A[],int k,int a)
{
    int B[2];
    int buyuk=A[0];
    int kucuk=A[0];

    for(int i=0;i<k;i++)
    {
        if(A[i]>buyuk)
        {
            buyuk=A[i];
            B[0]=buyuk;
        }
        if(A[i]<kucuk)
        {
            kucuk=A[i];
            B[1]=kucuk;
        }
    }
    return B[a];
}

int main()
{
    printf("boyut girin:");
    scanf("%d",&N);
    int A[N];

    for(int m=0;m<N;m++)
    {
        printf("A[%d]=",m);
        scanf("%d",&A[m]);
    }

    printf("en buyuk=%d\n",dizi_islem(A,N,0));
    printf("en kucuk=%d",dizi_islem(A,N,1));

    return 0;
}
