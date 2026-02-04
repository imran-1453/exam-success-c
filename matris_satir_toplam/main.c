#include <stdio.h>
#include <stdlib.h>

int i,k;
int A[2][4]={{10,20,30,40},{5,15,25,35}};

int main()
{
    for(i=0;i<2;i++)
    {
        int toplam=0;
        for(k=0;k<4;k++)
        {
            toplam=toplam+A[i][k];
        }
        printf("%d. satirin toplami:%d\n",i+1,toplam);
    }

}
