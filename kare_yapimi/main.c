#include <stdio.h>
#include <stdlib.h>

int N;

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);

    char A[N][N];

    for(int i=0;i<N;i++)
    {
        for(int k=0;k<N;k++)
        {
            if(i==0)
            {
                printf("*");
            }
            else if(i==k)
            {
                printf("*");
            }
            else if(i==N-k-1)
            {
                printf("*");
            }
            else if(i==N-1)
            {
                printf("*");
            }
            else if(k==0)
            {
                printf("*");
            }
            else if(k==N-1)
            {
                printf("*");
            }
            else
            {
                putchar(' ');
            }
        }
        printf("\n");
    }

    return 0;
}
