#include <stdio.h>
#include <stdlib.h>

char cumle[400];
int adet=1;

int main()
{
    printf("lutfen bir kelime giriniz: ");
    fgets(cumle, 400, stdin);

    printf("%s",cumle);

    for(int i=0;0<=i;i++)
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            continue;
        }
        else if(cumle[i]==' ')
        {
            adet++;
        }
        else
        {
            break;
        }
    }

    printf("kelime sayisi=%d",adet);

    return 0;
}
