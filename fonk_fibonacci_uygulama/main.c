#include <stdio.h>
#include <stdlib.h>

int N;

void fib(int sayi)
{
    int sonuc[sayi];
    sonuc[0]=0;
    sonuc[1]=1;
    for(int i=2;i<sayi;i++)
    {
        sonuc[i]=sonuc[i-1]+sonuc[i-2];
    }

    for(int i=0;i<sayi;i++)
    {
        printf("%d ",sonuc[i]);
    }

}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);
    fib(N);
}
