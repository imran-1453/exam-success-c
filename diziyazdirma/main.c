#include <stdio.h>
#include <stdlib.h>

int dizi[]= {1,2,3,4,5};
int i;

int main()
{
    printf("dizinin elemanlari: \n");
    for(i=4;i>=0;i=i-1)
    {
        printf("%d|| ",dizi[i]);
    }
    return 0;

}
