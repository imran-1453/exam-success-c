#include <stdio.h>
#include <stdlib.h>

int boyut(char A[])
{
    int adet=0;
    for(int i=0;A[i]!='\0';i++)
    {
        adet++;
    }

    return adet-2;
}

int pol(char A[],int bas,int son)
{
    if(bas>=son)
    {
        return 1;
    }
    if(A[bas]==A[son])
    {
        return pol(A,bas+1,son-1);
    }
    else
    {
        return 0;
    }
}


char cumle[];

int main()
{
    printf("bir cumle giriniz:");
    fgets(cumle,400,stdin);

    printf("%d",pol(cumle,0,boyut(cumle)));


    return 0;
}
