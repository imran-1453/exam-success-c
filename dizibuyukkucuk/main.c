#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int N,i;

int main()
{
    printf("N sayisini giriniz: ");
    scanf("%d",&N);
    int dizi[N];



    for(i=0;i<N;i++)
    {
        printf("dizinin %d. elemanini girin: ",i+1);        /// dizinin elemanlarýný alma
        scanf("%d",&dizi[i]);
    }

    int sonucB=dizi[0];
    int sonucK=dizi[0];

    for(i=0;i<N;i++)
    {
        if(sonucB<=dizi[i])            /// dizideki en büyük elemaný bulma
        {
            sonucB=dizi[i];
        }
    }


    for(i=0;i<N;i++)
    {
        if(sonucK>=dizi[i])            /// dizideki en kucuk elemaný bulma
        {
            sonucK=dizi[i];
        }
    }

    printf("en buyuk eleman %d\n",sonucB);
    printf("en kucuk eleman %d",sonucK);

    getch();



}
