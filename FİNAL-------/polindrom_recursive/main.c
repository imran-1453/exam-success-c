#include <stdio.h>
#include <stdlib.h>

int N;

int basamak(int N)
{
    int m=0;
    while(N!=0)
    {
        N=N/10;
        m++;
    }
    return m;
}

int pol_sayi(int A[],int bas,int son)
{
    if(bas>=son)
    {
        return 1;
    }
    if(A[bas]!=A[son])
    {
        return 0;
    }
    return pol_sayi(A,bas+1,son-1);
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    int adet = basamak(N);
    int sayi[adet];

    for(int i=adet-1;0<=i;i--)
    {
        sayi[i]=N%10;
        N=N/10;
    }

    printf("%d",pol_sayi(sayi,0,adet-1));


    return 0;
}
