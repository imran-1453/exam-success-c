#include <stdio.h>
#include <stdlib.h>

int N,i,k;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);

    int A[N][N];

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            if(i==k)
            {
                A[i][k] = 1;
            }
            else
            {
                A[i][k] = 0;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            printf("%d ",A[i][k]);
        }
        printf("\n");
    }



    return 0;
}



