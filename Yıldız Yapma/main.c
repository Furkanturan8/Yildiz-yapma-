#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi;
    int i,j;

     printf("Bir sayi giriniz:");
     scanf("%d",&sayi);

    for(i=0;i<sayi;i++){

        for(j=0;j<sayi-(i+1);j++){
            printf(" "); //bosluk (sayi-i-1=bosluk)
        }
        for(j=0;j<i+1;j++){
            printf("*");  //(i+1=yýldýz)

        }
            printf("\n");

        }
/*
       i degeri
4*4 ise girilen | sayi=4 sayi=bosluk+yildiz=>>>bosluk=sayi-yildiz=sayi-(n+1)
           0      *   3 bosluk 1 yildiz
           1     **   2 b 2y
           2    ***   1 b 3y
           3   ****   0 b 4y

*/

    return 0;
}
