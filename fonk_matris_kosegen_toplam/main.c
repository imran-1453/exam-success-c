#include <stdio.h>
#include <stdlib.h>

int N,i,k;

int matr(int N,int A[N][N])
{
    printf("=============A MATRISI=============\n");
    int sonuc=0;
    for(int i=0;i<N;i++)
    {
        for(int k=0;k<N;k++)
        {
            printf("|%d| ",A[i][k]);
            if(i==k)
            {
                sonuc = sonuc + A[i][k];
            }
        }
        printf("\n");
    }

    return sonuc;
}

int main()
{
    printf("matris boyutunu girin: ");
    scanf("%d",&N);
    int A[N][N];

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            printf("A[%d][%d]=",i,k);
            scanf("%d",&A[i][k]);
        }
    }


    printf("sonuc=%d",matr(N,A));
}
