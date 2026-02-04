#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char isimler[6][20]={"Ayse","Adem","Fatma","Bugra","Guler","Soner"};
int sayilar[2][6];
int tahmin,i,k,a=0;

int main()
{
    printf("bir sayi girin:");
    scanf("%d",&tahmin);

    srand(time(NULL));

    for(i=0;i<6;i++)
    {
        sayilar[0][i]=rand()%100;
        sayilar[1][i]=abs(tahmin-sayilar[0][i]);
    }

    int sonuc=sayilar[1][0];

    for(i=0;i<6;i++)
    {
        if(sayilar[1][i]<sonuc)
        {
            sonuc=sayilar[1][i];
            a=i;
        }
    }

    for(k=0;k<6;k++)
    {
        printf("%s\t%d\t%d\n",isimler[k],sayilar[0][k],sayilar[1][k]);
    }

    printf("kazanan:%s",isimler[a]);




    return 0;
}
