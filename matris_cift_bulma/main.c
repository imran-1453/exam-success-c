#include <stdio.h>
#include <stdlib.h>

int i,k;
int A[2][4]={{10,20,30,40},{5,15,25,35}};
int adet=0;

int main()
{
    for(i=0;i<2;i++)
    {
        for(k=0;k<4;k++)
        {
            if(A[i][k]%2==0)
            {
                printf("%d ",A[i][k]);
                adet=adet+1;
            }
        }
    }
    printf("\ncift sayi adet:%d",adet);

}
