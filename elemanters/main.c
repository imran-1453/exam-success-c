#include <stdio.h>
#include <stdlib.h>
int N,i,k;

int main()
{
    printf("Eleman sayiaini giriniz:");
    scanf("%d",&N);
    int A[N];
    for(i=0 ; i<N ;i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",&A[i]);
    }
    for(k=N-1 ;k>=0;k--)
    {
        printf("%d " ,A[k]);
    }

    return 0;
}
