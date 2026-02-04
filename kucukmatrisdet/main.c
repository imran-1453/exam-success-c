#include <stdio.h>
#include <stdlib.h>

int dolu=0;
int bos=0;

int main()
{
    int oto[3][4]={{1,0,1,0},{0,1,1,1},{1,1,0,1}};

    for(int i=0;i<3;i++)
    {
        for(int k=0;k<4;k++)
        {
            if(oto[i][k]==1)
            {
                dolu=dolu+1;
            }
            else
            {
                bos=bos+1;
            }
        }
    }
    printf("%d park yeri dolu.\n",dolu);
    printf("%d park yeri bos.\n",bos);
    printf("otopark[1][2]=%d",oto[1][2]);

    /// otopark[1][2] ->> 1. kat 3. alan.
}
