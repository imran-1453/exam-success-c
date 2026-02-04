#include <stdio.h>
#include <stdlib.h>

int tutar;
float toplam=0;

int main()
{
    printf("tutar giriniz: ");
    scanf("%d",&tutar);

    if(tutar<500)
    {
        toplam = tutar;
    }
    else if(tutar<1000)
    {
        toplam = tutar - tutar/10;
    }
    else
    {
        toplam = tutar - tutar/5;
    }

    printf("toplam tutar: %.2f",toplam); /// satýrdan sonra 2 basamak sayar


    return 0;
}
