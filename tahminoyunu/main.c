#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayi;
int tahmin;
char kapat;

int main()
{
    srand((unsigned)(time(NULL) ^ clock())); /// seedi zaman olarak deðiþtirerek rand() fonk. random sayýlar üretir.
    while(1==1)
    {
        int deneme=3;
        int puan=10;
        sayi = rand()%100;
        ///printf("%d\n",sayi);

        for(int i=0;i<3;i=i+1)
        {
            printf("can:%d||puan:%d\n",deneme,puan);
            printf("sayiyi tahmin ediniz: ");
            scanf("%d",&tahmin);
            if(tahmin==sayi)
            {
                printf("sayiyi dogru tahmin ettiniz. (%d)\n",sayi);
                printf("puan:%d\n",puan);
                break;
            }
            else
            {
                if(sayi<tahmin)
                {
                    printf("daha kucuk sayi tutun.\n");
                }
                else
                {
                    printf("daha buyuk sayi tutun.\n");
                }
                switch(deneme){
                case 3:
                    deneme=deneme-1;
                    puan=puan-3;
                    break;

                case 2:
                    deneme=deneme-1;
                    puan=puan-4;
                    break;

                case 1:
                    deneme=deneme-1;
                    puan=puan-3;
                    printf("can:%d||puan:%d\n",deneme,puan);
                    printf("caniniz tukendi tutulan sayi: %d.\n",sayi);
                    break;

                printf("sayiyi tahmin edemediniz tekrar deneyiniz.\n");
                printf("can:%d||puan:%d\n",deneme,puan);

                }
            }

        }

        printf("oyundan cikmak (e) // oyuna devam etmek (herhangi bir tus)");
        getchar();
        kapat=getchar();

        if(kapat=='e' || kapat=='E')
        {
            return 0;
        }



    }

}
