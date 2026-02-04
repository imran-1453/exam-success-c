#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N,i;
int toplam=0,aratoplam=0;
float ort=0;
float std,can1,can2;



int main()
{
    printf("ogrenci sayisini girin: ");
    scanf("%d",&N);

    int vize[N];

    for(i=0;i<N;i++)
    {
        printf("%d. ogrencinin vize notunu girin: ",i+1);
        scanf("%d",&vize[i]);
        toplam = toplam + vize[i];
    }
    ort = toplam/N;

    for(i=0;i<N;i++)
    {
        aratoplam = aratoplam + (vize[i]-ort)*(vize[i]-ort);
    }

    std = sqrt(aratoplam/(N-1));
    can1 = ort+std/2;
    can2= ort-std/2;

    printf("%.2f\n",std);
    printf("%.2f ||| %.2f",can1,can2);







    return 0;
}
