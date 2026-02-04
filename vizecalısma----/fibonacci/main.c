#include <stdio.h>
#include <stdlib.h>
int sayi;
int a=0;
int b=1;
int sonuc=1;
int i;

int main()
{
    printf("adet sayisini giriniz: ");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i=i+1)
    {
        printf("%d",sonuc);
        sonuc=a+b;
        a=b;
        b=sonuc;
    }

    return 0;
}
