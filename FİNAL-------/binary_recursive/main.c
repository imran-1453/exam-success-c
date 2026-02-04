#include <stdio.h>
#include <stdlib.h>

int N;

void binary(int N)
{
    if(N>1)
    {
        binary(N/2);
    }

    printf("%d",N%2);
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    binary(N);

    return 0;
}
