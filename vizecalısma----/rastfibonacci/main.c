#include <stdio.h>
#include <stdlib.h>
int a,b;
int sonuc;
int adet;
int i;

int main()
{
    printf("ilk ve ikinci sayi gir: ");
    scanf("%d \n %d",&a,&b);
    printf("adet sayisi gir: ");
    scanf("%d",&adet);

    printf("%d %d",a,b);

    for(i=0;i<adet-2;i=i+1)
    {
        sonuc = a + b;
        printf(" %d",sonuc);
        a=b;
        b=sonuc;

    }

    return 0;


}
