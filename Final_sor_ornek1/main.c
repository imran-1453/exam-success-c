#include <stdio.h>
#include <stdlib.h>

/// kendisine gelen char bir dizi içerisindeki harflerin yerine 0, rakamlarýn yerine 1 yazarak oluþacak yeni diziyi ekrana yazdýracak bir fonk yazýnýz:

void dizi_islem(char A[])
{
    char harf[10]={'0','1','2','3','4','5','6','7','8','9'};
    char sayi_dizi[2]={};
    char harf_dizi[3]={};
    int a=0,b=0;

    for(int i=0;i<A[i];i++)
    {
        int sayac=0;
        for(int k=0;k<10;k++)
        {
            if(A[i]==harf[k])
            {
                sayac++;
            }
        }
        if(sayac>0)
        {
            sayi_dizi[a]=A[i];
            a++;
        }
        else
        {
            harf_dizi[b]=A[i];
            b++;
        }
    }

    for(int i=0;i<a;i++)
    {
        printf("%c ",sayi_dizi[i]);
    }
    printf("\n");
    for(int i=0;i<b;i++)
    {
        printf("%c ",harf_dizi[i]);
    }
}

int main()
{
    char dizi[5]={'1','A','B','7','x'};

    dizi_islem(dizi);
    return 0;
}
