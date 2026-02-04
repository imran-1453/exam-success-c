#include <stdio.h>
#include <stdlib.h>

int dizi[5]={1,2,3,4,5};

int topla(int A[],int k)
{
    if(k==0)
    {
        return 1;
    }
    return A[k]+topla(A,k-1);
}

int main()
{
    int boyut = sizeof(dizi)/sizeof(dizi[0]);

    printf("%d",boyut);

    return 0;
}
