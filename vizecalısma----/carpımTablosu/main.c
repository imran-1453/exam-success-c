#include <stdio.h>
#include <stdlib.h>
int i;
int k;
int toplam;

int main()
{
    for(i=1;i<=10;i=i+1)
    {
        for(k=1;k<=10;k=k+1)
        {
            toplam = i*k;
            printf("%dx%d=%d\n",i,k,toplam);
        }
        printf("----------------------------\n");
    }
    return 0;
}
