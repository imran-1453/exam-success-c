#include <stdio.h>
#include <stdlib.h>

void dizi_islem(char A[])
{
    char sayi_dizi[2]={};
    char harf_dizi[3]={};
    int a=0,b=0;
    for(int i=0;i<5;i++)
    {
        if(A[i]<='9')         ///if((A[i]>='A' && A[i]<='Z' ) || (A[i]>='a' && A[i]<='a')) seklinde de harf siralamasi yapilabilir.
        {
            sayi_dizi[a]=A[i];
            a++;
        }
        else
        {
            harf_dizi[b]=A[i];
            b++;
        }
    }

    for(int i=0;i<a;i++)
    {
        printf("%c ",sayi_dizi[i]);
    }
    printf("\n");
    for(int i=0;i<b;i++)
    {
        printf("%c ",harf_dizi[i]);
    }
}


int main()
{
    char A[5]={'1','A','B','7','x'};

    dizi_islem(A);

    return 0;
}
