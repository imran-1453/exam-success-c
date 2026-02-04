#include <stdio.h>
#include <stdlib.h>

int notlar[2][3][4]=
    {
        {{85,90,92,89},{78,82,85,82},{70,75,80,75}},
        {{88,91,95,92},{80,83,88,85},{72,76,82,78}}
    };

int main()
{
    for(int i=0;i<2;i++)
    {
        printf("-----------------%d. siniflar---------------------\n",i+1);
        for(int k=0;k<3;k++)
        {
            printf("%d. ogrenci-> vize1:%d vize2:%d final:%d ortalama:%d\n",k+1,notlar[i][k][0],notlar[i][k][1],notlar[i][k][2],notlar[i][k][3]);
        }
    }

    printf("zeynep'in final notu: %d\n",notlar[1][0][2]);
    printf("Ayse'nin genel ortalamasý: %d\n",notlar[0][1][3]);

    return 0;
}
