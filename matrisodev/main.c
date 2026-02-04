#include <stdio.h>
#include <stdlib.h>

int M;
int N;
int deger;
int a=0;
int sayi;

int main()
{
    printf("lutfen M ve N yi yaziniz: ");
    scanf("%d %d", &M, &N);
    int matrix[M][N];


    while(a < M) ///kullanicidan matrixi alma ve listeye atama
    {
        for(int b=0;b<N;b=b+1)
        {
            printf("deger girin:");
            scanf("%d", &deger);
            matrix[a][b] = deger;
        }
        a = a + 1;
    }


    for(int i=0;i<M;i=i+1) ///matrixi yazdirma
    {
        for(int z=0;z<N;z=z+1)
        {
            printf("|%d|",matrix[i][z]);
        }
        printf("\n");
    }




    for(int s=0;s<M;s=s+1) ///matrixlerin içindeki sayilardan hangisinden kaç tane oldugunu bulma
    {
        for(int k=0;k<N;k=k+1)
        {
            int adet=0;
            sayi=matrix[s][k];
            for(int x=0;x<M;x=x+1)
            {
                for(int y=0;y<N;y=y+1)
                {
                    if(matrix[x][y]==sayi)
                    {
                        adet = adet+1;
                    }
                }
            }
            printf("%d sayisindan %d tane var.\n",matrix[s][k],adet);
        }
    }
    return 0;
}
