#include <stdio.h>
#include <stdlib.h>

int us;
int taban;
int sayac = 0;
int toplam = 1;

int main()
{

    printf("sayinin tabanini girin: ");
    scanf("%d", &taban);
    printf("Sayinin ussunu girin: ");
    scanf("%d", &us);

    do {
        toplam = toplam * taban;
        sayac = sayac + 1;
    } while (sayac < us);

    printf("Sonuc: %d\n", toplam);
    return 0;
}
