#include <stdio.h>
#include <stdlib.h>

int N;

int basamak_toplam(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n%10+basamak_toplam(n/10);
    }
}

int main()
{
    printf("sayi girin: ");
    scanf("%d",&N);
    printf("%d sayisinin basamak toplami= %d",N,basamak_toplam(N));
    return 0;
}
