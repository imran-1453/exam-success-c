#include <stdio.h>
#include <stdlib.h>

int N,i;
int toplam=0;
int ort=0;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);

    int dizi[N];

    for(i=0;i<N;i++)
    {
        printf("dizinin elemanlari girin: ");
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        toplam=toplam+dizi[i];
    }

    printf("dizideki elemanlarin toplami: %d\n",toplam);

    ort = toplam/N;

    printf("ortalama: %d",ort);


    return 0;
}
