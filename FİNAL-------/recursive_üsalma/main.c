#include <stdio.h>
#include <stdlib.h>

int t,u;

int us_alma(int t,int u)
{
    if(u==1)
    {
        return t;
    }
    else
    {
        return t*us_alma(t,u-1);
    }
}

int main()
{
    printf("taban ve us girin:");
    scanf("%d%d",&t,&u);

    printf("sonuc:%d",us_alma(t,u));

    return 0;
}
