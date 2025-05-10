#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int LineerArama( int A[],int N,int x)
{
    for(int i=0 ; i<N ; i++)
    {
        if(A[i]==x)
        {
            return i;
        }
    }
    return -1 ;
}

int main()
{  int boyut;
   int aranan;
   printf("Dizinin boyutunu belirleyiniz:");
   scanf("%d",&boyut);
   printf("\n");
   int dizi[boyut];
   srand(time(NULL));
   for(int i=0 ; i<boyut ; i++ )
   {
       dizi[i]=rand()%50+1;
       printf("%d ",dizi[i]);
   }
   printf("\nAranan degeri giriniz:");
   scanf("%d",&aranan);

   int yer=LineerArama(dizi,boyut,aranan);
   if(yer!=-1)
   printf("\nAranan deger dizinin %d'ninci indeks numarali elemanidir.",yer);
   else
    printf("\nyoktur.");




    return 0;
}

