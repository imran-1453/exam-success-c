#include <stdio.h>
#include <stdlib.h>

int N;

void bin(int N)
{
    if(N==1)
    {
        printf("%d",N%2);
    }
    else
    {
        bin(N/2);
        printf("%d",N%2);
    }
}

int main()
{
    printf("sayi girin: ");
    scanf("%d",&N);

    bin(N);


    return 0;
}
