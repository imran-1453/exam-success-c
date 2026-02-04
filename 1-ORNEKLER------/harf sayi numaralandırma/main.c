#include <stdio.h>
#include <stdlib.h>

char dizi[10]={'A','B','1','2','3','K','Z','7','L','9'};

int islem(char dizi[],int b)
{
    int A[10];
    for(int i=0;i<10;i++)
    {
        if(dizi[i]>='A' && dizi[i]<='Z')
        {
            A[i]=0;
        }
        else
        {
            A[i]=1;
        }
    }
    return A[b];
}

int main()
{
    for(int k=0;k<10;k++)
    {
        printf("%d ",islem(dizi,k));
    }
    return 0;
}
