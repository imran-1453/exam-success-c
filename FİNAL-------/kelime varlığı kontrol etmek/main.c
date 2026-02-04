#include <stdio.h>
#include <stdlib.h>

char ornek[]={"merhaba arkadaslar ben aksam menu yemek kum tuvalet yurt uni ilkokul ben yuru git araba"};
char kelime[];

int uzunluk_bul(char A[])
{
    int k=0;
    for(int i=0;A[i]!='\0';i++)
    {
        k++;
    }
    return k-2;
}

int ara_bul(char A[],char B[],int a,int b)
{
    int k;
    for(int i=0;i<a-b;i++)
    {
        for(k=0;k<b;k++)
        {
            if(A[i+k]!=B[k])
            {
                break;
            }
        }

        if(k==b)
        {
            printf("cumlenin icinde aradiginiz kelime var.");
            return 0;
        }
        if(i==a-b-1)
        {
            printf("cumlenin icinde aradiginiz kelime yok.");
        }

    }
}

int main()
{
    printf("bir kelime girin:");
    scanf("%s",&kelime);

    int cumle_uzunluk = uzunluk_bul(ornek);
    int kelime_uzunluk = uzunluk_bul(kelime);

    ara_bul(ornek,kelime,cumle_uzunluk,kelime_uzunluk);


    return 0;
}
