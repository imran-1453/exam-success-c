#include <stdio.h>
#include <stdlib.h>

int N,i;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);

    int dizi[N];

    for(i=0;i<N;i++)
    {
        printf("dizinin %d. elemanini girin: ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=N-1;0<=i;i=i-1)
    {
        printf("%d ",dizi[i]);
    }


    return 0;
}
