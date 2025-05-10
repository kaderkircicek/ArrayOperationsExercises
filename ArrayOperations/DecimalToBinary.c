#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    int arasayi=sayi;
    int dizi[100];
    int i,j;
    for(i=0;;i++)
    {
        dizi[i]=arasayi%2;
        arasayi=arasayi/2;
        if(arasayi<1)
            break;
    }

for(j=i ; j>=0 ; j--)
    printf("%d",dizi[j]);
    return 0;
}
