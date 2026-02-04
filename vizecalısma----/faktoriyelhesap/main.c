#include <stdio.h>
#include <stdlib.h>

int sayac=1;
int toplam=1;
int N;

int main()
{
    printf("sayiyi girin: ");
    scanf("%d",&N);

    while(sayac<=N)
    {
        toplam = toplam*sayac;
        sayac = sayac+1;
    }
    printf("Toplam: %d",toplam);


    return 0;
}
