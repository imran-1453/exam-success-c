#include <stdio.h>
#include <stdlib.h>

int N;

int fakt(int sayi)
{
    int sonuc = 1;
    for(int i=sayi;0<i;i--)
    {
        sonuc = sonuc*i;
    }
    return sonuc;
}

int main()
{
    printf("lutfen sayi girin: ");
    scanf("%d",&N);
    printf("faktoriyel: %d",fakt(N));
    return 0;
}
