#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{   srand(time(NULL));
    int N;
    printf("Dizinizin boyutunu girin:");
    scanf("%d",&N);
    int A[N];
    int enk;
    int yerk;
    int enb;
    int yerb;

   for(int i=0; i<N ;i++)
   {
       A[i]=23+ rand()%39;
       printf("Dizinin %d. elemani:",i);
       printf("%d\n",A[i]); }

      enk=A[0];
       yerk=0;
       enb=A[0];
       yerb=0;

    for(int i=1 ; i<N ;i++)  {

       if(enk  > A[i])
       {
           enk=A[i];
           yerk=i;
       }}

       for(int i=1 ; i<N ;i++)  {

       if(enb < A[i])
       {
           enb=A[i];
           yerb=i;
       }
    }

   printf("Dizinin en kucuk elemani:%d'dir\n",enk);
   printf("indexno:%d'dir.\n",yerk);
   printf("Dizinin en buyuk elemani:%d'dir\n",enb);
   printf("indexno:%d'dir.\n",yerb);

    return 0;
}
