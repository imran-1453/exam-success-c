#include <stdio.h>
#include <stdlib.h>

int sayi;
int basamak;
int i;
char tus;

int main()
{

    do
    {
        int adet=0;
        int toplam=0;
        printf("Bir sayi girin: ");
        scanf("%d",&sayi);
        if(sayi>0)
        {
            printf("sayi pozitiftir.\n");
        }
        else if(sayi<0)
        {
            printf("sayi negatiftir.\n");
            sayi = abs(sayi); /// sayının mutlak değerini alır
        }
        else
        {
            printf("sayý sifirdir.\n");
        }


        if(sayi%2==0)
        {
            printf("sayi cifttir\n");
        }
        else
        {
            printf("sayi tektir\n");
        }

        if(sayi==0)
        {
            adet=1;
            toplam=1;
        }

        while(sayi>0)
        {
            basamak = sayi%10;
            adet=adet+1;
            toplam = toplam + basamak;
            sayi = sayi/10;
        }

        printf("basamak sayisi: %d\n",adet);
        printf("basamak toplami: %d\n",toplam);

        printf("devam etmek istiyorsan (e), istemiyorsan(h)");
        getchar();
        tus=getchar();


    }while(tus!='h');
}
