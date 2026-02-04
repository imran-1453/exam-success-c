#include <stdio.h>
#include <stdlib.h>

int i,k,m,j;
int kontrol[28][2]={};
int sonuc[2];

int main()
{
    int dizi[28]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6,7,7,7,7,7};

    for(i=0;i<28;i++)
    {
        int adet=0;
        int sayi=0;

        for(m=0;m<i;m++)
        {
            if(dizi[m]==dizi[i])
            {
                sayi++;
            }
            if(sayi>0)
            {
                break;
            }
        }
        if(sayi>0)
        {
            continue;
        }

        for(k=0;k<28;k++)
        {
            if(dizi[i]==dizi[k])
            {
                adet++;
            }
        }
        kontrol[j][0]=dizi[i];
        kontrol[j][1]=adet;
        j++;
    }

    sonuc[1]=kontrol[0][1];

    for(i=1;i<j;i++)
    {
        if(kontrol[i][1]>sonuc[1])
        {
            sonuc[0]=kontrol[i][1];
            sonuc[1]=kontrol[i][0];
        }
    }

    printf("en cok tekrar eden sayi: %d",sonuc[0]);

    return 0;
}
