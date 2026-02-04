#include <stdio.h>
#include <stdlib.h>
int N,S;
int T=0;
int A;
int ort=0;

int main()
{
   printf("Bir sayý 'N' girin:");
   scanf("%d", & N);
   while(S<N)
   {
       printf("Bir sayý 'A' Girin:");
       scanf("%d", & A);
       T = T + A;
       S = S + 1;
       ort = T / N;
    }
    printf("ortalama=%d",ort);
}

