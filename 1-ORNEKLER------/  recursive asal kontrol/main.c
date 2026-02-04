#include <stdio.h>
#include <stdlib.h>

int N;

int asal(int N,int m)
{
    if(m==N)
    {
        return 1;
    }
    if(N%m==0 || N==1)
    {
        return 0;
    }
    else
    {
        return asal(N,m+1);
    }
}

int main()
{
    printf("bir sayi girin:");
    scanf("%d",&N);
    printf("%d",asal(N,2));
    return 0;
}
