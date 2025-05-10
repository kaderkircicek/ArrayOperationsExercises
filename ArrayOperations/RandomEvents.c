#include <stdio.h>
#include <stdlib.h>

int main()

{
    srand(time(NULL));
    int zar1,zar2,para,basamak4,secim;


    for(int i=1 ; i<20; i++)


    {
    secim=rand()%3+1;
    if(secim==1)

     {
         printf("Atilan paranin yuzu:");
         para=rand()%2;
         if(para)
            printf("Tura\n");
         else
            printf("Yazi\n");
     }


     if (secim==2)
     {
         zar1=rand()%6+1;
         zar2=rand()%6+1;
         printf("Atilan iki zarin sonuclari su sekildedir:[%d %d]\n",zar1,zar2);
     }

     if(secim==3)

     {
         basamak4=rand()%9000+1000;
         printf("Icimizden tuttugumuz dort basamakli sayi:%d'dir.\n",basamak4);

     }
    }
    return 0;
}
