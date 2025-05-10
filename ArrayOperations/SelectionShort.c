#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void SecmeliSirala(int A[],int N)
{
    int enk,yerk;
    for(int i=0 ; i<N-1 ; i++)
    {
       enk=A[i];
       yerk=i;
       for(int j=i+1 ; j<N ; j++)
       {
           if( enk > A[j])
           {
               enk=A[j];
               yerk=j;
           }
       }

        A[yerk]=A[i];
        A[i]=enk;

    }

}


int main()
{  int boyut ;
   printf("Dizinin boyutunu giriniz:");
   scanf("%d",&boyut);
   int dizi1[boyut];
   srand(time(NULL));
   for( int i=0 ; i<boyut ; i++)
   {
       dizi1[i]=rand()%100+1;
       printf("%d ",dizi1[i]);
   }
   SecmeliSirala(dizi1,boyut);
   printf("\n Sirali Dizi \n");
   for(int i=0 ; i<boyut ; i++)
   {
       printf("%d ",dizi1[i]);
   }




    return 0;
}
