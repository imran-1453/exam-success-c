#include <stdio.h>
#include <stdlib.h>

char yazi[100];

int kelime_sayi(char A[])
{
    int m=0;
    for(int i=0;A[i]!='\0';i++)
    {
        m++;
    }

    return m;
}

void str_ters(char A[],int boyut)
{
    if(boyut==0)
    {
        printf("%c",A[boyut]);
    }
    else
    {
        printf("%c",A[boyut]);
        str_ters(A,boyut-1);
    }
}

int main()
{
    printf("bir kelime girin: ");
    scanf("%s",yazi);

    int boyut=kelime_sayi(yazi)-1;

    str_ters(yazi,boyut);

    return 0;
}
