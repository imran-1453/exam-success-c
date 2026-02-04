#include <stdio.h>
#include <stdlib.h>

int kilo;
float boy;
float endeks;

int main()
{
    printf("boy: ");
    scanf("%f",&boy);
    printf("kilo: ");
    scanf("%d",&kilo);

    endeks= (kilo)/(boy*boy);

    if(endeks<18.5)
    {
        printf("zayif");
    }
    else if(18.5<=endeks && endeks<25)
    {
        printf("normal");
    }
    else if(25<=endeks && endeks<30)
    {
        printf("kilolu");
    }
    else
    {
        printf("obez");
    }

    return 0;
}
