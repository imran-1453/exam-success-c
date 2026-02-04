#include <stdio.h>
#include <stdlib.h>


int sonuc=0;
int sayi1;
int sayi2;
char islem;
char tus;


int main()
{

    do
    {
        printf("yapacaginiz islemi secin (+) | (-) | (x) | (/):  ");
        scanf("%c",&islem);

        switch(islem){

            case '+':
                printf("ilk sayiyi girin: ");
                scanf("%d",&sayi1);

                printf("ikinci sayiyi girin: ");
                scanf("%d",&sayi2);

                sonuc=sayi1 + sayi2;
                printf("%d + %d = %d\n",sayi1,sayi2,sonuc);
                break;

            case '-':
                printf("ilk sayiyi girin: ");
                scanf("%d",&sayi1);

                printf("ikinci sayiyi girin: ");
                scanf("%d",&sayi2);

                sonuc = sayi1 - sayi2;
                printf("%d - %d = %d\n",sayi1,sayi2,sonuc);
                break;

            case 'x':
                printf("ilk sayiyi girin: ");
                scanf("%d",&sayi1);

                printf("ikinci sayiyi girin: ");
                scanf("%d",&sayi2);

                sonuc = sayi1*sayi2;
                printf("%d x %d = %d\n",sayi1,sayi2,sonuc);
                break;

            case '/':
                printf("ilk sayiyi girin: ");
                scanf("%d",&sayi1);

                printf("ikinci sayiyi girin: ");
                scanf("%d",&sayi2);

                sonuc = sayi1/sayi2;
                printf("%d / %d = %d\n",sayi1,sayi2,sonuc);
                break;

            default:
                printf("olamayan islem sectiniz tekrar deneyiniz.\n");
                break;
        }
        printf("cikmak istiyorsaniz e veya E tusuna basiniz.");
        getchar();
        tus=getchar();
        printf("%c",tus);


    }while(tus=!'e' && tus!='E');

}
