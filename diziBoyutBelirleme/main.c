#include <stdio.h>
#include <stdlib.h>

int boyut;
int i;
int toplam=0;
float ort=0;

int main()
{

    printf("diziniz boyutunu girin: ");
    scanf("%d",&boyut);

    if (boyut <= 0)
    {
        printf("gecersiz boyut pozitif bir tam sayi girin.\n");
        return 1;
    }

    int dizi[boyut];

    printf("lutfen %d adet tam sayi girin: \n",boyut);
    for(i=0;i<boyut;i++)
    {
        printf("Elemen %d: ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("girdiginiz tam sayilar:\n ");
    for(i=0;i<boyut;i=i+1)
    {
        printf("%d||",dizi[i]);
        toplam = toplam + dizi[i];
    }
    printf("\n");

    ort = toplam/boyut;

    printf("%.2f",ort);

    return 0;
}
