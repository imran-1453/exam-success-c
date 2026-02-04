#include <stdio.h>
#include <stdlib.h>

int N;

int fak(int sayi)
{
    if(sayi==0)
    {
        return 1;
    }
    else
    {
        return sayi*fak(sayi-1);
    }
}

int main()
{
    printf("sayi girin:");
    scanf("%d",&N);
    int sonuc = fak(N);
    printf("sonuc=%d",sonuc);
    return 0;
}
