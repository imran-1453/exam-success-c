#include <stdio.h>
#include <stdlib.h>

int i;
int k;

int main()
{
    for(i=1;i<=5;i=i+1)
    {
        for(k=0;k<i;k=k+1)
        {
            printf("*");
        }
        printf("\n");
    }
}
