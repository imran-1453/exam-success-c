#include <stdio.h>
#include <stdlib.h>

int N;
int b=1;
int a=0;

int fib(int N)
{
    if(N==0)
        return 1;
    else
    {
        int sonuc=a+b;
        printf("%d ",sonuc);
        a=b;
        b=sonuc;
        return fib(N-1);
    }
}

int main()
{
    printf("bir sayi girin: ");
    scanf("%d",&N);
    fib(N);
    return 0;
}
