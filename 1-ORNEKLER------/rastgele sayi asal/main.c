#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int asal(int N,int m)
{
    if(N==m)
    {
        return 1;
    }
    if(N%m==0)
    {
        return 0;
    }
    else
    {
        return asal(N,m+ 1);
    }
}

int main()
{
    srand(time(NULL));
    int sayi= rand()%100+1;
    printf("%d\n",sayi);
    printf("%d",asal(sayi,2));

    return 0;
}
