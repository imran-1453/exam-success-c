#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sayi;

int main()
{
    srand(time(NULL));
    while(1==1)
    {
        sayi=rand()%140+5;
        printf("%d\n",sayi);
        if(sayi==74)
        {
            break;
        }
    }
}
