#include <stdio.h>
#include <stdlib.h>

int i;
int persayi;
int gun;
int parcasayi;
int toplamucret=0;
int toplamparca=0;


int main()
{
    printf("personel sayisini girin: "); ///personel sayisi alma
    scanf("%d",&persayi);


    for(i=1;i<=persayi;i=i+1) /// personel sayisi kadar döngü dönecek
    {
        int maas=575;  /// her personelde maas 575 olup baþtan hesaplancak.
        int personelparca=0; ///her personelde ürettiði toplam parca sayýsý 0 lanýp hesaplancak

        printf("%d. personel bilgisi girin\n",i);
        printf("-------------------------------\n");

        for(gun=1;gun<=30;gun=gun+1)
        {
            printf("%d. gun parca sayisini girin:",gun); ///parca sayýsý alma
            scanf("%d",&parcasayi);

            personelparca = personelparca + parcasayi; /// personelin toplam parca sayýsýný hesaplama

            if(gun<=25)

            {
                maas = maas + parcasayi*60;
            }
            else                                 ///gundeki parca sayýsýna göre maasý hesaplama
            {
                maas = maas + parcasayi*90;
            }
        }
        printf("---------------------------------------------\n");
        printf("%d. personelin maasi: %d\n",i,maas);
        printf("personelin urettigi toplam parca: %d\n",personelparca);

        toplamparca = toplamparca + personelparca; ///toplam üertilen parcayý hesaplama

        toplamucret = toplamucret + maas; /// personellere verilen toplam ücreti hesaplama


    }
    printf("---------------------------------------------\n");
    printf("toplam uretilen parca sayisi: %d\n",toplamparca);
    printf("personele toplam odenilen para: %d\n",toplamucret);
    printf("---------------------------------------------\n");


    return 0;
}
