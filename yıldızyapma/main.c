#include<stdio.h>
#include<conio.h>

int main()
{
    //Deðiþkenlerin tanýmlanmasý
    int i, j, bosluk_sayisi, yildiz_sayisi, boyut;

    printf("Satir sayisini giriniz: ");
    scanf("%d", &boyut);

    // Eðer boyut çiftse, bir artýrýyoruz ki tek sayý olsun
    if (boyut % 2 == 0)
    {
        boyut += 1;
    }
    bosluk_sayisi = boyut / 2;
    yildiz_sayisi = 1;

    for (i = 0; i < boyut; i++)
    {
        // Boþluklarý yazdýr
        for (j = 0; j < bosluk_sayisi; j++)
        {
            printf(" ");
        }
        // Yýldýzlarý yazdýr
        for (j = 0; j < yildiz_sayisi; j++)
        {
            printf("*");
        }

        // Ýlk kýsýmda boþluklarý azaltýp yýldýzlarý artýrýyoruz
        if (i < boyut / 2)
        {
            bosluk_sayisi--;
            yildiz_sayisi += 2;
        }
        // Ýkinci kýsýmda boþluklarý artýrýp yýldýzlarý azaltýyoruz
        else
        {
            bosluk_sayisi++;
            yildiz_sayisi -= 2;
        }
        printf("\n");
    }
    getch();
    return 0;
}
