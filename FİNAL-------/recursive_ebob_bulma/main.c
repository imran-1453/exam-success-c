#include <stdio.h>
#include <stdlib.h>

///Formül: ebob(a, b) sonucu, ebob(b, a % b) sonucuyla aynýdýr. (Sayýlarý küçülterek ilerleriz). ebob(6, 0)=>6

int m,n;

int ebob(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    else
    {
        return ebob(n,m%n);
    }
}

int main()
{
    printf("m ve n sayi girin: ");
    scanf("%d %d",&m,&n);

    printf("ebob(%d,%d)=%d",m,n,ebob(m,n));

    return 0;
}
