#include <stdio.h>
#include <stdlib.h>

int i,k,N;

int main()
{
    printf("N sayisini girin: ");
    scanf("%d",&N);


    for(i=1;i<=N;i++)
    {
        for(k=1;k<=i;k++)
        {
            if(k==1 || k==i || i==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
