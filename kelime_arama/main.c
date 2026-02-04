#include <stdio.h>
#include <stdlib.h>

char cumle[400];
char kelime[20];

int uzun(char A[])
{
    int adet=0;
    for(int i=0;A[i]!='\n';i++)
    {
        adet=i;
    }
    return adet;
}

int main()
{
    printf("bir cumle girin:");
    fgets(cumle,400,stdin);
    printf("aranacak kelime:");
    fgets(kelime,20,stdin);

    int boy_cumle= uzun(cumle);
    int boy_kelime= uzun(kelime);

    for(int i=0;i<boy_cumle-boy_kelime;i++)
    {
        int adet=0;
        for(int k=0;k<boy_kelime;k++)
        {
            if(cumle[i+k]==kelime[k])
            {
                adet++;
            }
        }
        if(adet==boy_kelime)
        {
            printf("kelime mevcut");
            break;
        }

    }


    return 0;
}
