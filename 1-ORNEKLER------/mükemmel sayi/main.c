#include <stdio.h>
#include <stdlib.h>

int N;
int toplam=0;

int main()
{
    printf("sayi girin:");
    scanf("%d",&N);

    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            toplam=toplam+i;
        }
    }

    if(N==toplam)
    {
        printf("mukemmel");
    }
    else
    {
        printf("degil");
    }
    return 0;
}
