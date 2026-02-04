#include <stdio.h>
#include <stdlib.h>

int N;

int fakt(int N)
{
    if(N==0)
    {
        return 1;
    }
    else
    {
        return N*fakt(N-1);
    }
}

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);

    printf("%d!=%d",N,fakt(N));

    return 0;
}
