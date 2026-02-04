#include <stdio.h>
#include <stdlib.h>

int N,i,j;

int dizi_sirala(int A[])
{
    int temp;
    int k=0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            k++;
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    // yazdirma
    printf("siralanmis dizi\n");
    for(i=0;i<N;i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }

    return k;
}

int main()
{
    printf("boyut girin: ");
    scanf("%d",&N);
    int A[N];

    for(i=0;i<N;i++)
    {
        printf("%d. elemani girin: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("siralanmamis dizi\n");
    for(i=0;i<N;i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }


    printf("islem sayisi=%d",dizi_sirala(A));


    return 0;
}
