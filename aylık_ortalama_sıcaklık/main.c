#include <stdio.h>
#include <stdlib.h>

#define gun_sayisi 30

float ort_sicaklik(double A[])
{
    float sonuc=0;
    for(int i=0;i<gun_sayisi;i++)
    {
        sonuc=sonuc+A[i];
    }
    sonuc=sonuc/gun_sayisi;
    return sonuc;
}

double minmax_sicaklikbul(double A[],int m)
{
    double max=A[0];
    double min=A[0];
    int a=1,b=1;
    for(int i=0;i<gun_sayisi;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            a=i+1;
        }
        if(A[i]<min)
        {
            min=A[i];
            b=i+1;
        }
    }

    double K[4]={max,a,min,b};

    return K[m];

}

int main()
{
    double sicaklik[gun_sayisi]={25.0,24.5,25.5,27.0,27.5,24.0,23.5,24.0,26.0,27.0,27.0,20.0,26.0,25.5,25.0,24.0,21.0,22.5,24.0,25.0,26.0,25.5,25.0,24.0,24.0,24.0,23.0,21.5,22.5,22.5};

    for(int m=0;m<4;m++)
    {
        printf("%.2f\n",minmax_sicaklikbul(sicaklik,m));
    }

    printf("ort=%.2f",ort_sicaklik(sicaklik));


}
