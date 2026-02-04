#include <stdio.h>
#include <stdlib.h>

int m,n,i,k,a,b,p,z;

int main()
{
    printf("matrisin m ve n degerini girin: ");
    scanf("%d %d",&m,&n);
    int dizi[m][n];

    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            printf("(%d,%d) elemanini girin: ",i+1,k+1);  ////// diziye eleman alma
            scanf("%d",&dizi[i][k]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
        {
            int kontrol = 0;            ////önce sayilan değerleri bulma
            for(p=0;p<m;p++)
            {
                for(z=0;z<n;z++)
                {
                    if(p==i && z==k)
                    {
                        break;
                    }
                    if(dizi[i][k]==dizi[p][z])
                    {
                        kontrol += 1;
                    }
                }
                if(p==i) /////// iki for var ilkinden çikmak içindi.
                    {
                        break;
                    }
            }
            if(kontrol==0)
            {
                int adet=0;
                for(a=0;a<m ;a++)
                {
                    for(b=0;b<n;b++)
                    {
                        if(dizi[i][k]==dizi[a][b])  ///////// adet sayisini bulma
                        {
                            adet += 1;
                        }
                    }
                }
                printf("%d sayisindan %d tane var.\n",dizi[i][k],adet);

            }
        }
    }
    return 0;
}
