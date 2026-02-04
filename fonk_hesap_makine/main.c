#include <stdio.h>
#include <stdlib.h>

int topla(int x,int y)
{
    int toplam = x + y;
    return toplam;
}
int fark(int x,int y)
{
    int fark = x - y;
    return fark;
}
int carpma(int x,int y)
{
    int carpim = x*y;
    return carpim;
}
float bolme(int x,int y)
{
    int bolum = x/y;
    return bolum;
}


int main()
{
    printf("%d*%d=%d\n",12,4,carpma(12,4));
    printf("%d+%d=%d\n",12,4,topla(12,4));
    printf("%d-%d=%d\n",12,4,fark(12,4));
    printf("%d/%d=%.2f",12,4,bolme(12,4));
}
