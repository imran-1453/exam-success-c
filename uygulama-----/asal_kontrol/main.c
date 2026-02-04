#include <stdio.h>
#include <stdlib.h>

int N;

int asal_kontrol(int N)
{
    int adet=0;
    for(int i=2;i<N;i++)
    {
        if(adet>0)
        {
            break;
        }
        else if(N%i==0)
        {
            adet++;
        }
    }
    if(adet==0 && (N!=0 && N!=1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);
    if(asal_kontrol(N)==1)
    {
        printf("%d asaldir.",N);
    }
    else
    {
        printf("%d asal degil.",N);
    }

    return 0;
}
