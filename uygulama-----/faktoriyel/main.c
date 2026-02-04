#include <stdio.h>
#include <stdlib.h>

int N;
int sonuc=1;

int main()
{
    printf("lutfen bir sayi girin: ");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)
    {
        sonuc=sonuc*i;
    }

    printf("sonuc=%d",sonuc);




    return 0;
}
