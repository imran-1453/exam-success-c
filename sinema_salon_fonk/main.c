#include <stdio.h>
#include <stdlib.h>

int N,k;
int toplam=0;
int salon[10][10];
int fiyat=120;

void satis()
{
    printf("koltuk numarasi: ");
    scanf("%d %d",&N,&k);
    salon[N-1][k-1]=1;
    toplam = toplam+fiyat;
}

void kontrol()
{
    for(int i=0;i<10;i++)
    {
        for(int k=0;k<10;k++)
        {
            printf("%d ",salon[i][k]);
        }
        printf("\n");
    }
}

void kapatma()
{
    printf("\n------------------------------------------------\n");
    for(int i=0;i<10;i++)
    {
        for(int k=0;k<10;k++)
        {
            salon[i][k]=0;
            printf("%d ",salon[i][k]);
        }
        printf("\n");
    }
    printf("toplam ciro= %d",toplam);
}


int main()
{
    for(int m=0;m<8;m++)
    {
        satis();
    }
    kontrol();
    kapatma();

    return 0;
}
