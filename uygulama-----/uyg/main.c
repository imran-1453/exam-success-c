#include <stdio.h>
#include <stdlib.h>

int fiyat;
float sonuc;
float vergi;

int main()
{
    printf("urunun fiyatini giriniz: ");
    scanf("%d",&fiyat);
    if(fiyat<100)
    {
        vergi=fiyat*0.05;
    }
    else if(fiyat>=100 && fiyat<500)
    {
        vergi=fiyat*0.1;
    }
    else
    {
        vergi=fiyat+0.18;
    }
    sonuc = vergi + fiyat;
    printf("vergi: %.2f\n",vergi); /// .2f virgülden sonra basamak sayýsýný belirliyoruz.(2 basamak var)
    printf("toplam: %.2f",sonuc);
    return 0;
}
