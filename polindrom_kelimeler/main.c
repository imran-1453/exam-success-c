#include <stdio.h>
#include <stdlib.h>

int pol(char kelime[])
{
    int kontrol=0;
    int bas=0,son=4;
    if(bas==son)
    {
        return kontrol;
    }
    if(kelime[bas]==kelime[son])
    {
        kontrol++;
        bas++;
        son--;
    }
    return pol(kelime)

}


int main()
{

    char kelime[] = "kayak";


    return 0;
}
