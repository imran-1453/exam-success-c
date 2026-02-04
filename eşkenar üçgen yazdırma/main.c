#include <stdio.h>
#include <stdlib.h>

int N;

int main()
{
    printf("sayi girin: ");
    scanf("%d",&N);

    char A[N][N];

    for(int i=0;i<N;i++)
    {
        for(int m=1;m<N-i;m++)
        {
            printf(" ");
        }

        for(int k=1;k<=2*i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
