#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void DiziTopla(int A[], int B[], int C[], int N)
{
   int toplam=0;
   int elde=0;
   for(int i=N-1 ; i>=0 ; i-- )
   {
       toplam=A[i]+B[i]+elde;
       C[i+1]=toplam%10;
       elde=toplam/10 ;
   }
   C[0]=elde ;

}

int main()
{   int boyut ;
    printf("Dizinin boyutunu giriniz:");
    scanf("%d",&boyut);
    int dizi1[boyut],dizi2[boyut],dizi3[boyut+1];
    srand(time(NULL));
    for(int i=0; i<boyut ; i++)
    {
        dizi1[i]=rand()%10;
        dizi2[i]=rand()%10;

    }


    for( int i=0 ; i<boyut ; i++)
        {printf(" %d",dizi1[i]);}

        printf("\n");

    for( int i=0 ; i<boyut ; i++)
       {printf(" %d",dizi2[i]);}

    DiziTopla(dizi1,dizi2,dizi3,boyut);
    printf("\n");
    printf("+______________________\n");
    for(int i=0 ; i<=boyut ; i++)
    {
        printf(" %d",dizi3[i]);
    }

    return 0;
}
