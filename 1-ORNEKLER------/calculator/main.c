#include <stdio.h>
#include <stdlib.h>

int sayi;

int calculator(int N)
{
    int toplam=0;
    for(int k=0;k<=N;k++)
    {
        toplam = toplam + 3*(4*k+2);
    }
    return toplam;
}

int main()
{
    printf("sayi girin:");
    scanf("%d",&sayi);
    printf("sonuc=%d",calculator(sayi));
    return 0;
}
