#include <stdio.h>
#include <stdlib.h>
int N;

int bas(int N)
{
    if(N==0)
    {
        return 0;
    }
    return N%10+bas(N/10);
}

int main()
{
    printf("bir sayi girin:");
    scanf("%d",&N);
    printf("sonuc=%d",bas(N));
    return 0;
}
