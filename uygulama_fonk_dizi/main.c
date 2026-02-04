#include <stdio.h>

int dizi_topla(int dizi[],int n)
{
    int toplam=0;
    for(int i=0;i<n;i++)
    {
        toplam += dizi[i];
    }
    return toplam;
}

int main()
{
    int sayilar[]={4,7,1,9,3};
    int n=5;

    int toplam=dizi_topla(sayilar,n);
    printf("Dizi toplami: %d\n",toplam);


    return 0;
}
