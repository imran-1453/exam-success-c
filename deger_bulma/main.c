#include <stdio.h>
#include <stdlib.h>

int N,i,m;

int main()
{
    printf("Boyut girin: ");
    scanf("%d",&N);

    int A[N];

    for(i=0;i<N;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }

    printf("araiginiz diziyi girin: ");
    scanf("%d",&m);

    for(i=0;i<N;i++)
    {
        if(A[i]==m)
        {
            printf("%d degeri vardir",m);
        }
    }

    return 0;
}
