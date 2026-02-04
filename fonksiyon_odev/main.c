#include <stdio.h>
#include <stdlib.h>

int m=0;

int asal_kontrol(int sayi)
{
    int sonuc=1;
    for(int i=1;i<=sayi;i++)
    {
        if(sayi%i==0)
        {
            sonuc = sonuc*i;
        }
    }
    if(sonuc==sayi && sayi!=1)
    {
        return sayi;
    }
    else
    {
        return 1;
    }
}

int asal_dizi(int A[],int m)
{
    int dizi[4];
    int s=0;
    for(int i=0;i<7;i++)
    {
        if(asal_kontrol(A[i])!=1)
        {
            dizi[s] = asal_kontrol(A[i]);
            s=s+1;
        }
    }
    return dizi[m];
}

int main()
{
    int dizi[7]={0,1,2,3,5,7,9};
    for(m=0;m<4;m++)
    {
        printf("%d ",asal_dizi(dizi,m));
    }

    return 0;
}
