#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c;
int delta;
float x1,x2;

int main()
{
    printf("katsayilari girin: ");
    scanf("%d %d %d",&a,&b,&c);
    delta = b*b -4*a*c;
    if(delta<0)
    {
        printf("gercek reel koku yoktur");
    }
    else if(delta==0)
    {
        x1 = (-b+sqrt(delta))/2*a;
        printf("denklemin bir koku vardir.\n");
        printf("%f denklemin kokudur",x1);
    }
    else
    {
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("%lf\n%lf",x1,x2);

    }
    return 0;
}
