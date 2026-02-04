#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N,i;
int basamak=0;

int sayi_uret(int N[])
{
    int sayi;
    for(int i=0;i<basamak;i++)
    {
        sayi = sayi + pow(10,i)*N[i];
    }
    return sayi;
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    int sayi=N;

    while(sayi!=0)
    {
        sayi=sayi/10;
        basamak++;
    }

    int dizi[basamak];
    sayi=N;

    for(int i=basamak-1;0<=i;i--)
    {
        dizi[i]=sayi%10;
        sayi=sayi/10;
    }

    int sonuc=sayi_uret(dizi);
    if(sonuc==N)
    {
        printf("%d polindrom sayidir.",N);
    }
    else
    {
        printf("%d polindrom sayi degil.",N);
    }




}
