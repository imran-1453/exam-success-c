#include <stdio.h>
#include <stdlib.h>

float ort=0;

int main()
{
    int A[12]={1,2,3,4,5,25,6,7,8,5,4,41};

    for(int i=0;i<12;i++)
    {
        ort=ort+A[i];
    }

    ort=ort/12;

    printf("ort=%.2f \n",ort);

    for(int i=0;i<12;i++)
    {
        if(A[i]>ort)
        {
            printf("%d ",A[i]);
        }
    }

    return 0;
}
