#include <stdio.h>
#include <stdlib.h>

int N,i,k;
int enb=0;
int enb2=0;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);
    int dizi[N];

    for(i=0;i<N;i++)
    {
        printf("dizinin %d. elemanini girin: ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        if(enb<dizi[i])
        {
            enb=dizi[i];
        }

    }
    do{


    }while(k!=N)

    printf("en buyuk eleman: %d\n",enb);
    printf("en buyuk ikinci eleman: %d",enb2);


    return 0;
}
