#include <stdio.h>
#include <stdlib.h>

int N,i,sayi;

int adet=0;

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

    printf("aradiginiz sayiyi girin: ");
    scanf("%d",&sayi);

    for(i=0;i<N;i++)
    {
        if(sayi==dizi[i])
        {
            adet = adet+1;
        }
    }

    printf("%d sayisindan %d tane var.",sayi,adet);



    return 0;
}
