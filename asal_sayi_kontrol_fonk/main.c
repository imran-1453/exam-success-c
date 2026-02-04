#include <stdio.h>
#include <stdlib.h>

int N;

int asal_kontrol(int sayi)
{
    int bolen=0;
    for(int i=1;i<=sayi;i++)
    {
        if(bolen>2)
        {
            break;
        }
        if(sayi%i==0)
        {
            bolen=bolen+1;
        }
    }
    if(bolen==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void asallari_bul(int dizi[])
{
    for(int i=0;i<8;i++)
    {
        if(asal_kontrol(dizi[i])==1)
        {
            printf("%d ",dizi[i]);
        }
    }
}

int main()
{
    int A[]={12, 7, 19, 4, 15, 2, 23, 10};

    printf("Dizideki asallar: ");
    asallari_bul(A);

    return 0;
}
