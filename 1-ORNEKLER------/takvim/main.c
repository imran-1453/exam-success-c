#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void giris_ekran()
{
    printf("\n\n\n\t\t\t\t");
    for(int i=0;i<49;i++)
    {
        if(i==0)
        {
            printf("%c",201);
        }
        else if(i==48)
        {
            printf("%c",187);
        }
        else
        {
            printf("%c",205);
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\n\t\t\t\t%c\t\t\t\t\t\t%c",186,186);
    }
    printf("\n\t\t\t\t%c\t\t  TAKVIM PROGRAMI \t\t%c",186,186);
    for(int i=0;i<2;i++)
    {
        printf("\n\t\t\t\t%c\t\t\t\t\t\t%c",186,186);
    }
    printf("\n\t\t\t\t%c   DEVAM ETMEK ICIN D VEYA d TUSUNA BASINIZ.   %c",186,186);
    for(int i=0;i<2;i++)
    {
        printf("\n\t\t\t\t%c\t\t\t\t\t\t%c",186,186);
    }
    printf("\n\t\t\t\t%c\t  CIKIC ICIN ESC TUSUNA BASINIZ   \t%c",186,186);
    for(int i=0;i<2;i++)
    {
        printf("\n\t\t\t\t%c\t\t\t\t\t\t%c",186,186);
    }
    printf("\n\t\t\t\t");
    for(int i=0;i<49;i++)
    {
        if(i==0)
        {
            printf("%c",200);
        }
        else if(i==48)
        {
            printf("%c",188);
        }
        else
        {
            printf("%c",205);
        }
    }

}

int ay_bas(int yil,int ay)
{
     int d=1;
     int y;
     if(ay==13 || ay==14)
     {
         y=yil-1;
     }
     else
     {
         y=yil;
     }
     int k=y%100;
     int j=y/100;
     int h=(d + (13*(ay+1))/5 +k + k/4 + j/4 + 5*j)%7;
     return h;
}

void sonuc_ekran(int ay,int bas,int yil)
{
    printf("\n\n\n\t");
    int gun;
    switch(ay)
    {
        case 13:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tOCAK\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 14:
            if((yil%4==0 && yil%100!=0) || (yil%100==0 && yil%400==0))
            {
                gun=29;
            }
            else
            {
                gun=28;
            }
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tSUBAT\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 3:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tMART\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 4:
            gun=30;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tNISAN\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 5:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tMAYIS\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 6:
            gun=30;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tHAZIRAN\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 7:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tTEMMUZ\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 8:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tAGUSTOS\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 9:
            gun=30;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tEYLUL\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 10:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tEKIM\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 11:
            gun=30;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tKASIM\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;

        case 12:
            gun=31;
            printf("\t\t|--------------------------------------------------------|\n\n");
            printf("\t\t\t\t\t\tARALIK\n");
            printf("\t\t\t   pzt\tsal\tcar\tper\tcuma\t");
            printf("\033[31m cmt \t pzr \033[0m\n");
            break;
    }

    switch(bas)
    {
        case 2:
            printf("\t\t\t   ");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("%d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 3:
            printf("\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("%d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 4:
            printf("\t\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("% d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 5:
            printf("\t\t\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("% d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 6:
            printf("\t\t\t\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("% d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 0:
            printf("\t\t\t\t\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("% d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

        case 1:
            printf("\t\t\t\t\t\t\t\t\t");
            for(int i=1;i<=gun;i++)
            {
                if(bas==0)
                {
                    printf("\033[31m %d\t\033[0m",i);
                }
                else if(bas==1)
                {
                    printf("\033[31m %d\t\033[0m\n",i);
                }
                else
                {
                    printf("% d\t",i);
                }

                if(bas==1)
                {
                    printf("\n\t\t\t   ");
                }
                bas=bas+1;
                if(bas==7)
                {
                    bas=0;
                }
            }
            break;

    }



}




int main()
{
    giris_ekran();
    char tus=getch();
    if(tus==27)
    {
        system("cls");
        printf("CIKMAK ISTEDIGINIZE EMIN MISINIZ? (E/H)");
        tus=getch();
        if(tus=='E' || tus=='e')
        {
            return 0;
        }
        else if(tus=='H' || tus=='h')
        {
            system("cls");
            return main();
        }

    }
    if(tus=='d' || tus=='D')
    {
        system("cls");
        printf("\n\n\n\t\t\t\t\t\t TAKVIM PROGRAMI \t\t\n");
        printf("\t\t\t\t---------------------------------------------------------\n\n");
        printf("\t\t\t\t\t TAKVIM YILINI GIRINIZ:");
        int yil;
        scanf("%d",&yil);
        system("cls");
        printf("\n\t\t\t\t\t %d YILI TAKVIMI \t\t\n",yil);
        int oc=ay_bas(yil,13);
        int su=ay_bas(yil,14);
        sonuc_ekran(13,oc,yil);
        sonuc_ekran(14,su,yil);
        int a;
        for(int i=3;i<=12;i++)
        {
            a=ay_bas(yil,i);
            sonuc_ekran(i,a,yil);

        }


    }


}
