#include <stdio.h>
#include <stdlib.h>

int sayi;
int N;
int sonuc=1;

int main()
{
    printf("sayiyi girin: ");
    scanf("%d",&sayi);
    for(N=1;N<=sayi;N=N+1)
    {
        if(sayi%N==0)
        {
            sonuc = sonuc*N;
        }
    }
    if(sonuc==sayi && sayi!=1)
    {
        printf("%d asal sayi",sayi);
    }
    else
    {
        printf("%d asal sayi degildir.",sayi);
    }


    return 0;
}
