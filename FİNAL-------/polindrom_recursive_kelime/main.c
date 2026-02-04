#include <stdio.h>
#include <stdlib.h>

char kelime[30];

int uzun(char A[])
{
    int adet=0;
    for(int i=0;A[i]!='\0';i++)
    {
        adet=i;
    }
    return adet;
}

int pol(char A[],int bas,int son)
{
    if(bas>=son)
    {
        return 1;
    }
    if(A[bas]!=A[son])
    {
        return 0;
    }
    else
    {
        return pol(A,bas+1,son-1);
    }
}


int main()
{
    printf("bir kelime girin:");
    scanf("%s",&kelime);

    int son=uzun(kelime);

    int sonuc=pol(kelime,0,son);

    if(sonuc==1)
    {
        printf("polindrom");
    }
    else
    {
        printf("polindrom degil");
    }

    return 0;
}
