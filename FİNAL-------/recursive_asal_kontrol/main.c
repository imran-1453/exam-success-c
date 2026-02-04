#include <stdio.h>
#include <stdlib.h>

int N;

int asal_kontrol(int N,int m)
{
    if(m>=N)
    {
        return 1;
    }
    if(N%m==0)
    {
        return 0;
    }

    return asal_kontrol(N,m+1);

}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    printf("%d",asal_kontrol(N,2));


    return 0;
}
