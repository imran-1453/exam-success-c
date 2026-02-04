#include <stdio.h>
#include <stdlib.h>

int A[3][5]={{1,0,1,0,1},{0,1,1,1,0},{1,1,0,1,1}};
int dolu=0;
int bos=0;

int main()
{
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<5;k++)
        {
            if(A[i][k]==1)
            {
                dolu++;
            }
            else
            {
                bos++;
            }
        }
    }
    printf("doluluk:%d || bos yer:%d",dolu,bos);
    return 0;
}
