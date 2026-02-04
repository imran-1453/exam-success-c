#include <stdio.h>
#include <stdlib.h>
int sayi;
int sonuc=0;
int sonuc2=0;
char tus;


int main()
{
    do
    {
        printf("sayiyi girin: ");
        scanf("%d",&sayi);
        if(sayi>sonuc)
        {
            sonuc2 = sonuc;
            sonuc = sayi;
        }
        tus = getchar();

    }while(tus!='h');

    printf("%d/%d",sonuc,sonuc2);

    return 0;


}
