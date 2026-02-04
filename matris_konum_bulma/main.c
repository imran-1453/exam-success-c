#include <stdio.h>
#include <stdlib.h>

int i,k,sayi;
int A[2][4]={{10,20,30,40},{5,15,25,35}};
int adet=0;

int main()
{
    printf("aradiginiz sayiyi girin: ");
    scanf("%d",&sayi);

    for(i=0;i<2;i++)
    {
        for(k=0;k<4;k++)
        {
            if(sayi==A[i][k])
            {
                printf("%d sayisi %d. satir %d. sutunda",sayi,i+1,k+1);
                adet=adet+1;
                break;
            }
        }
        if(adet==1)
        {
            break;
        }
    }
    if(adet==0)
    {
        printf("aradiginiz sayi bulunamadi.");
    }

    return 0;

}
