#include <stdio.h>
#include <stdlib.h>

int t,u;

int us_al(int taban,int us)
{
    int sonuc=1;
    for(int i=0;i<us;i++)
    {
        sonuc=sonuc*taban;
    }
    return sonuc;
}

int main()
{
    printf("lutfen tabani girin: ");
    scanf("%d",&t);
    printf("lutfen us girin: ");
    scanf("%d",&u);
    printf("sonuc: %d",us_al(t,u));
    return 0;
}
