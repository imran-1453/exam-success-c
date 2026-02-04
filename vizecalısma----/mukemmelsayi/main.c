#include <stdio.h>
#include <stdlib.h>
int sayi;
int b=1;
int s=0;

int main()
{
    printf("lutfen sayi girin: ");
    scanf("%d",&sayi);
    while(b<sayi)
    {
        if(sayi%b==0)
        {
            s = s + b;
        }
        b = b + 1; ///eðer içine yazsaydým sonsuz döngüye girerdi.
    }
    if(sayi==s)
    {
        printf("%d sayisi mukemmel sayidir.",sayi);
    }
    else
    {
        printf("%d mukemmel sayi degildir.",sayi);
    }
    return 0;
}
