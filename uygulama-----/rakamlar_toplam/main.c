#include <stdio.h>
#include <stdlib.h>

int N;
int sonuc=0;

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    for(int i=0;i<=N;i++)
    {
        if(N==0)
        {
            break;
        }
        else
        {
            sonuc = sonuc + N%10;
            N=N/10;
        }
    }

    printf("basamaklar toplami=%d",sonuc);

    return 0;
}
