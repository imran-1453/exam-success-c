#include <stdio.h>
#include <stdlib.h>

int N;
int k=0,m=0;

int fonk(int A[N][N],int B[N][N],int C[N][N],int a,int b)
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                C[i][j]=A[i][j]*B[i][j];
            }
            else
            {
                C[i][j]=A[i][j]+B[i][j];
            }
        }
    }

    return C[a][b];

}

int main()
{
    printf("lutfen N degerini girin: ");
    scanf("%d",&N);
    int A[N][N],B[N][N],C[N][N];

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("-------------------------------------------\n");

    for(int i=0;i<N;i++)
    {
        for(int k=0;k<N;k++)
        {
            printf("C[%d][%d]=%d\n",i,k,fonk(A,B,C,i,k));
        }
    }

    return 0;
}
