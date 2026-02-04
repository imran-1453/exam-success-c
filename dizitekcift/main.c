#include <stdio.h>
#include <stdlib.h>

int N,i;
int k=0,m=0;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);

    int dizi[N];
    int tekdizi[(N/2)+1];
    int ciftdizi[(N/2)+1];

    for(i=0;i<N;i++)
    {
        printf("dizinin %d. elemanini girin: ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<N;i++)
    {
        if(dizi[i]%2==0)
        {
            ciftdizi[k]=dizi[i];
            k=k+1;
        }
        else
        {
            tekdizi[m]=dizi[i];
            m=m+1;
        }
    }

    for(i=0;i<m;i++)
    {
        printf("%d ",tekdizi[i]);
    }

    printf("\n-----------------\n");

    for(i=0;i<k;i++)
    {
        printf("%d ",ciftdizi[i]);
    }


    return 0;
}
