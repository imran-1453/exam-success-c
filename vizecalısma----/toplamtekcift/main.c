#include <stdio.h>
#include <stdlib.h>

int N;
int i;
int toplamTek=0;
int toplamCift=0;


int main()
{
    printf("sayiyi girin: ");
    scanf("%d",&N);

    for(i=1;i<=N;i=i+1)
    {
        if(i%2==0)
        {
            toplamCift = toplamCift + i;
        }
        else
        {
            toplamTek = toplamTek + i;
        }
    }
    printf("Tek sayilarin toplami: %d\n",toplamTek);
    printf("Cift sayilarin toplami: %d\n",toplamCift);


    return 0;
}
