#include <stdio.h>
#include <stdlib.h>

int N;

int dizi_sirala(int A[],int boyut,int a)
{
    for(int i=0;i<boyut;i++)
    {
        int temp=0;
        for(int k=0;k<boyut;k++)
        {
            if(A[i]<A[k])
            {
                temp=A[i];
                A[i]=A[k];
                A[k]=temp;
            }
        }
    }
    return A[a];
}

int main()
{
    printf("N sayisini girin:");
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }

    for(int m=0;m<N;m++)
    {
        printf("%d ",dizi_sirala(A,N,m));
    }

    return 0;
}
