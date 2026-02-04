#include <stdio.h>
#include <stdlib.h>

int taban,us;

int us_alma(int t,int u)
{
    if(u==1)
    {
        return t;
    }

    return t*us_alma(t,u-1);
}

int main()
{
    printf("taban girin:");
    scanf("%d",&taban);
    printf("us girin:");
    scanf("%d",&us);
    printf("sonuc=%d",us_alma(taban,us));
    return 0;
}
