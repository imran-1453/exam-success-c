#include <stdio.h>
#include <stdlib.h>

int N;

int asal(int N, int k)
{
    if(N==k)
    {
        return 1;
    }
    if(N%k!=0)
    {
        return asal(N,k+1);
    }
    else if(N==1 && N==0)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("bir sayi girin:");
    scanf("%d",&N);
    printf("%d",asal(N,2));
    return 0;
}
