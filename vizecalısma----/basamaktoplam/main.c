#include <stdio.h>
#include <stdlib.h>

int sayi;
int toplam=0;

int main()
{
    printf("sayiyi girin: ");
    scanf("%d",&sayi);
    while(0<sayi)
    {
        toplam= sayi%10 + toplam;
        sayi = sayi/10;
    }
    printf("Toplam: %d",toplam);

    return 0;
}
