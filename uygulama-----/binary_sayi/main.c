#include <stdio.h>
#include <stdlib.h>

int sayi,i;
int bolum=0,kalan=0;
int binary[100];

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&sayi);
    kalan=sayi%2;
    binary[0]=kalan;
    bolum = (sayi-kalan)/2;
    for(i=1;i<100;i++)
    {
        if(bolum==1)
        {
            binary[i]=bolum;
            break;
        }
        kalan=bolum%2;
        binary[i]=kalan;
        bolum=(bolum-kalan)/2;

    }
    for(int k=i+1;0<=k;k--)
    {
        printf("%d",binary[k]);
    }

    return 0;
}
