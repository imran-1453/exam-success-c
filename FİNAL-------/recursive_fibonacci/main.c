#include <stdio.h>
#include <stdlib.h>

int N,i;
int A[100]={};

int fib(int N)
{
    if(N<=1)
    {
        return A[N]=N;
    }
    else
    {
        return A[N]=fib(N-1)+fib(N-2);
    }
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);
    fib(N);

    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}
