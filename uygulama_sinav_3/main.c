#include <stdio.h>
#include <stdlib.h>

int N,i,k;

int main()
{
    printf("lutfen kare satiri girin: ");
    scanf("%d",&N);
    char A[N][N];

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            if((i==k) || (i+k==N-1))
            {
                A[i][k]='x';
            }
            else
            {
                A[i][k]='.';
            }
        }
    }

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            printf("%c",A[i][k]);
        }
        printf("\n");
    }

    return 0;
}
