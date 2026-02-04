#include <stdio.h>
#include <stdlib.h>

int N;
int adet=0;

int main()
{
    printf("bir sayi giriniz: ");
    scanf("%d",&N);

    for(int i=0;i<=N;i++)
    {
        if(N==0)
        {
            break;
        }
        else
        {
            N=N/10;
            adet++;
        }
    }

    printf("basamak sayisi=%d",adet);


    return 0;
}
