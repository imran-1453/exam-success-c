#include <stdio.h>
#include <stdlib.h>

int dizi[5]={1,2,3,4,5};

void ters(int A[],int i)
{
    if(i==0)
    {
        printf("%d ",A[i]);
    }
    else
    {
        printf("%d ",A[i]);
        return ters(A,i-1);
    }
}

int main()
{
    ters(dizi,4);
    return 0;
}
