#include <stdio.h>
#include <stdlib.h>

int sayi;
int adet=0;


int main(){

    do
    {
        printf("bir sayi giriniz: ");
        scanf("%d", &sayi);
        if(sayi%2==0 && sayi!=0)
        {
            adet=adet+1;
        }
    }while(sayi!=0);
    printf("%d adet cift sayi yazdiniz",adet);

    return 0;


}
