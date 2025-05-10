#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{  int satir;
   int sutun;
   int a[3][4];
   for(satir=0 ; satir<3 ; satir++)
   {
       printf("%d'ninci satirdaki elemanlar:\n",satir);
       for( sutun=0 ;sutun<4 ; sutun++)
       {
           scanf("%d",&a[satir][sutun]);
       }
   }

   printf("\n ________TABLO________\n");
   for(satir=0 ; satir<3 ; satir++)
   {
       printf("%d.satir: ",satir);
       for(sutun=0 ; sutun<4 ; sutun++)
       {
           printf("%d",a[satir][sutun]);
       }
       printf("\n");
   }

    return 0;
}
